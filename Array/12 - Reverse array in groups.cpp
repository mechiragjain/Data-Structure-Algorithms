/*Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.*/

#include <bits/stdc++.h>
using namespace std;


vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    long long temp;
    for(int l=0;l<n;l=l+k){
        int a=l;
        int r=((l+k-1)<n)?(l+k-1):(n-1);
        while(a<r){
            temp=mv[a];
            mv[a++]=mv[r];
            mv[r--]=temp;
        }
    }
    return mv;
}


int main() {
    
    int t;
    cin >> t; 

    while(t--){ 

        int n;
        cin >> n;
        
        vector<long long> mv;
        
        int k;
        cin >> k; //input k 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x;
            mv.push_back(x); 
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " ";
        }

        cout << endl;
        
       

    }

}