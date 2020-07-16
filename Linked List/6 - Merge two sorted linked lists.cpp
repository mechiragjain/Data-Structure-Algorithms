/*Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged lists*/

#include <iostream>
#include <bits/stdc++.h>

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    // code here
    Node *LinkedList1=head_A, *LinkedList2=head_B;
    if(LinkedList1==NULL)
        return LinkedList2;
    else if(LinkedList2==NULL)
        return LinkedList1;
    Node *head,*tail;
    if(LinkedList1->data<=LinkedList2->data){
        head=LinkedList1;
        tail=LinkedList1;
        LinkedList1=LinkedList1->next;
    } else{
        head=LinkedList2;
        tail=LinkedList2;
        LinkedList2=LinkedList2->next;
    }
    while(LinkedList1 && LinkedList2){
        if(LinkedList1->data<=LinkedList2->data){
            tail->next=LinkedList1;
            LinkedList1=LinkedList1->next;
            tail=tail->next;
        }else{
            tail->next=LinkedList2;
            LinkedList2=LinkedList2->next;
            tail=tail->next;
        }
    }
    if(LinkedList1)
        tail->next=LinkedList1;
    else if(LinkedList2)
        tail->next=LinkedList2;
    return head;
}  