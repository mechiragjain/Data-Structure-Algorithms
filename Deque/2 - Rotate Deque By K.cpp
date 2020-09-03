/*Given a Deque deq of size N containing non-negative integers and a positive integer K, the task is to rotate elements of the deque by K places in a circular fashion. There will be two rotations which you have to implement depending on the type rotating query.*/


#include<bits/stdc++.h>
using namespace std;


void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    int temp;
    for(int i=1;i<=k;i++){
        temp=deq.front();
        deq.pop_front();
        deq.push_back(temp);
    }
    
}

void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    int temp;
    for(int i=1;i<=k;i++){
        temp=deq.back();
        deq.pop_back();
        deq.push_front(temp);
    }
}


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> deq;
        for(int i = 1; i <= n; i++)
        {
            int val;
            cin>>val;
            deq.push_back(val);
            
        }
        int rotateQuery, k;
        cin>>rotateQuery>>k;
        
        
        
        if(rotateQuery == 1)
            right_Rotate_Deq_ByK(deq, n, k);
            
        else left_Rotate_Deq_ByK(deq, n, k);
        
        
        for(auto itr = deq.begin(); itr != deq.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends