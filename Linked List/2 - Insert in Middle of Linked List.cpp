/*Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list.*/

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data=x;
	Node *traverseDouble = head;
	Node *middleNode = head;
	while(traverseDouble->next!=NULL && traverseDouble->next->next!=NULL){
	    traverseDouble=traverseDouble->next->next;
	    middleNode=middleNode->next;
	}
	newNode->next=middleNode->next;
	middleNode->next=newNode;
	return head;
}