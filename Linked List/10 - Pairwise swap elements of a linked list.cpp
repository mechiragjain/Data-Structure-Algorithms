/*Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.*/

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* pairWiseSwap(Node* head);

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		head = pairWiseSwap(head);
		printList(head);
	}
	return 0; 
}

Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    if(head==NULL || head->next==NULL)
        return head;
    Node *current = head->next->next;
    Node *prev=head;
    head=head->next;
    head->next=prev;
    while(current!=NULL && current->next!=NULL){
        prev->next=current->next;
        prev=current;
        Node *temp=current->next->next;
        current->next->next=current;
        current=temp;
    }
    prev->next=current;
    return head;
}



/*Alternate Easy Solution
Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    Node *current = head;
    while(current!=NULL && current->next!=NULL){
        swap(current->data,current->next->data);
        current=current->next->next;
    }
    return head;
}
*/