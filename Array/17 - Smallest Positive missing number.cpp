/*You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array*/

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) { 
    int max=0;
    int ans[100001]={0};
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(arr[i]<=n){
                ans[arr[i]]=-1;
                if(max<arr[i])
                    max=arr[i];
            }
        }
    }
    for(int i=1;i<=max;i++)
        if(ans[i]==0)
            return i;
} 

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}