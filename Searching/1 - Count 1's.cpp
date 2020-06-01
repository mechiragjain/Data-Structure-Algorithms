/*Given a binary sorted non-increasing array arr of size N. You need to print the count of 1's in the binary array.*/

#include <bits/stdc++.h>
using namespace std;

int arr[5000001];

int leftIndex(int arr[],int left, int right, int k){
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==k && (mid==0 || arr[mid-1]!=k))
            return mid;
        if(arr[mid]>=k)
            right=mid-1;
        else 
            left=mid+1;
    }
    return -1;
}

int countOnes(int n)
{
    
    // Your code here
    sort(arr,arr+n);
    int left=leftIndex(arr,0,n-1,1);
    if(left==-1)
        return 0;
    return (n-left);
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
                
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(n)<<endl;
    }
    return 0;
}