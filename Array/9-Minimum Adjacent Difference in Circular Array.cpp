/*Given an array Arr of N integers arranged in a circular fashion. Your task is to find the minimum absolute difference between adjacent elements.*/

#include <bits/stdc++.h>
using namespace std;

int minAdjDiff(int arr[], int n){    
    int minArr[n];
    for(int i=1;i<n;i++){
        minArr[i-1]=abs(arr[i-1]-arr[i]);
    }
    minArr[n-1]=abs(arr[n-1]-arr[0]);
    return *min_element(minArr, minArr + n);
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        cout << minAdjDiff(arr, n) << endl;
    }
    return 0;
}