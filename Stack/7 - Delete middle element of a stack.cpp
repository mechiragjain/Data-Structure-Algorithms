/*Given a stack with push(), pop(), empty() operations, delete the middle of it without using any additional data structure*/

#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current);

int main() {
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);
            
            
        }
        if(sizeOfStack==1)
        {
            cout<<myStack.top();
        }
        else
        {
        
            stack<int> modified=deleteMid(myStack,myStack.size(),0);
            
            
            while(!modified.empty())
            {
                cout<<modified.top()<<" ";
                modified.pop();
            }
        }
        cout<<endl;
        
    }   
	return 0;
}

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    //Your code here

    if(s.empty())
        return s;
    int mid = ceil(sizeOfStack/2);
    if(current==mid){
        s.pop();
        return s;
    }
    int topElem=s.top();
    s.pop();
    stack<int> temp=deleteMid(s,sizeOfStack,current+1);
    temp.push(topElem);
    return temp;
}

