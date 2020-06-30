/*Given an array A of positive integers. Your task is to find the leaders in the array.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
     vector<int> final;
     int current=arr[n-1];
     final.push_back(current);
     for(int i=n-2;i>=0;i--){
         if(current<=arr[i]){
             final.push_back(arr[i]);
             current=arr[i];
         }
     }
     reverse(final.begin(),final.end());
    return final;
}

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}