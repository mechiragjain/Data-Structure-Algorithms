/*You are given an array A (distinct elements) of size N. Find out the maximum difference between any two elements such that larger element appears after the smaller number in A.*/

#include <iostream>
#include <bits/stdc++.h>

int main() {
	int testCases;
	cin>>testCases;
	while(testCases){
	    int n,i;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int minValue=arr[0];
	    int res=arr[1]-arr[0];
	    for(i=1;i<n;i++){
	        res=max(res,arr[i]-minValue);
	        minValue=min(minValue,arr[i]);
	    }
	    cout<<res<<endl;
	    testCases--;
	}
	return 0;
}