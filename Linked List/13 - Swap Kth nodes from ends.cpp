/*Given a singly linked list of size N, and an integer K. You need to swap the Kth node from beginning and Kth node from the end in the linked list*/

#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// Should swap Kth node from beginning and Kth
// node from end in list and return new head.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    Node *first=head,*prevFirst=NULL;
    Node *second=head, *prevSecond=NULL;
    int swapNo=(num-K+1);
    if(2 * K - 1 == num || K>num)
        return head;
    for(int i=1;i<K;i++){
        prevFirst=first;
        first=first->next;
    }
    for(int i=1;i<swapNo;i++){
        prevSecond=second;
        second=second->next;
    }
    if(prevFirst)
        prevFirst->next=second;
    if(prevSecond)
        prevSecond->next=first;
    Node *temp=first->next;
    first->next=second->next;
    second->next=temp;
    if(prevFirst==NULL)
        return second;
    else if(prevSecond==NULL)
        return first;
    return head;
}
