/*Given an array arr[] of N non-negative integers representing the height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.*/

#include<bits/stdc++.h>

using namespace std;

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    int water=0,max1[n],max2[n];
    max1[0]=arr[0];
    max2[n-1]=arr[n-1];
    for(int j=1;j<n;j++)
        max1[j]=max(max1[j-1],arr[j]);
    for(int k=n-2;k>=0;k--)
        max2[k]=max(max2[k+1],arr[k]);
    for(int i=1;i<n-1;i++){
        water+=(min(max1[i],max2[i])-arr[i]);
    }
    return water;
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends