/*Given an array A[] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array*/

#include<bits/stdc++.h>
using namespace std;


vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    vector<long long> greaterElement;
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(st.empty()==false && arr[st.top()]<=arr[i])
            st.pop();
        long long max=st.empty()?-1:arr[st.top()];
        greaterElement.push_back(max);
        st.push(i);
    }
    reverse(greaterElement.begin(),greaterElement.end());
    return greaterElement;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}