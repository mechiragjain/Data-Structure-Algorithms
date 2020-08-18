/*Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit.*/

#include <bits/stdc++.h>
using namespace std;

long getMaxArea(long long arr[], int n){
    
    // Your code here
    stack<int> st;
    long res=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            int val=st.top();
            st.pop();
            long area=arr[val]*(st.empty()?i:(i-st.top()-1));
            res=max(res,area);
        }
        st.push(i);
    }
    while(!st.empty()){
        int val=st.top();
        st.pop();
        long area=arr[val]*(st.empty()?n:(n-st.top()-1));
        res=max(res,area);
    }
    return res;
}

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}