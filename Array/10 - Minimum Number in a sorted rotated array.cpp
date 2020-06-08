/*A sorted array arr[] of size N which is rotated at some unknown point. The task is to find the minimum element in it. All the elements in the array are distinct.*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findPivot(int arr[], int low, int high) 
{ 
    if (high < low) 
        return -1; 
    if (high == low) 
        return low; 
    
    int mid = (low + high)/2;
    if (mid < high && arr[mid] > arr[mid + 1]) 
    	return mid; 
    	
    if (mid > low && arr[mid] < arr[mid - 1]) 
    	return (mid-1); 
    	
    if (arr[low] >= arr[mid]) 
    	return findPivot(arr, low, mid-1); 
    else if (arr[high]<arr[mid])
        return findPivot(arr, mid + 1, high); 
    return -1;
} 

int main() {
	int testCases;
	cin>>testCases;
	while(testCases--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int index=findPivot(arr,0,n-1);
	    if(index==-1)
	        cout<<arr[0]<<endl;
	    else
	        cout<<arr[index+1]<<endl;
	}
	return 0;
}