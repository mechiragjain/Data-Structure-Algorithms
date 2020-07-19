/*Given a linked list of N nodes. The task is to check if the the linked list has a loop. Linked list can contain self loop.*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool detectLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        if( detectLoop(head) )
            cout<< "True\n";
        else
            cout<< "False\n";
    }
	return 0;
}

bool detectLoop(Node* head)
{
    if(head==NULL)
        return false;
    Node *slowPointer = head, *fastPointer = head;
    while(fastPointer!=NULL && fastPointer->next!=NULL){
        slowPointer=slowPointer->next;
        fastPointer=fastPointer->next->next;
        if(slowPointer==fastPointer)
            return true;
    }
    return false;
}
