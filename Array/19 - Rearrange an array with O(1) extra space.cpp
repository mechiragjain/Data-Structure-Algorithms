/*Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]]. */

#include<bits/stdc++.h>
using namespace std;
    
// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n) {
    // Your code here
    for (int i=0;i<n;i++) 
        arr[i]+=(arr[arr[i]]%n)*n; 
    for (int i=0;i<n;i++) 
        arr[i]/=n; 
}


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        arrange(A, n);
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends