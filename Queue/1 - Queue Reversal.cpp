/*Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete the function rev(), that reverses the N elements of the queue.*/


#include<bits/stdc++.h>
using namespace std;
queue<long long int> rev(queue<long long int> q);
int main()
{
    long long int test;
    cin>>test; 
    while(test--)
    {
    queue<long long int> q; 
    long long int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<long long int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}

queue<long long int> rev(queue<long long int> q)
{
    // add code here.
    stack<int> st;
    while(!q.empty()){
        int item=q.front();
        st.push(item);
        q.pop();
    }
    while(!st.empty()){
        int item=st.top();
        q.push(item);
        st.pop();
    }
    return q;
}