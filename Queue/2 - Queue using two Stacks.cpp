/*Implement a Queue using 2 stacks s1 and s2 .*/

#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}

void StackQueue :: push(int x)
 {
        if(s1.empty())
            s1.push(x);
        else{
            while(!s1.empty()){
                int item=s1.top();
                s1.pop();
                s2.push(item);
            }
            s2.push(x);
            while(!s2.empty()){
                int item=s2.top();
                s2.pop();
                s1.push(item);
            }
        }
 }


int StackQueue :: pop()
{ 
        if(s1.empty())
            return -1;
        int item=s1.top();
        s1.pop();
        return item;
}