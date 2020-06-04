/*Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).*/

#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
    for(int i=1;i<n;i=i+2){
        swap(arr[i],arr[i-1]);
    }
}


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            
        cout<<endl;
    }
}