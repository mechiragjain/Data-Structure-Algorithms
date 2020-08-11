/*You are given an array A of size N. You need to first push the elements of the array into a stack and then print minimum in the stack at each pop.*/

#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

/* inserts elements of the array into 
   stack and return the stack
*/
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> st;
   st.push(arr[0]);
   for(int i=1;i<n;i++){
       if(st.top()>=arr[i]){
           st.push(arr[i]);
       }else{
           st.push(st.top());
       }
   }
   return st;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();  
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}