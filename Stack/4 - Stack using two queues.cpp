/*Implement a Stack using two queues q1 and q2*/

#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
    q2.push(x);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code   
        if(!q1.empty()){
            int temp=q1.front();
            q1.pop();
            return temp;
        }
        return -1;
}
