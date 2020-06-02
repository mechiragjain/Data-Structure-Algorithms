/*Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. */


#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int low,int high){
    int temp;
    while(low<high){
        temp=arr[low];
        arr[low++]=arr[high];
        arr[high--]=temp;
    }
}

void rotateArr(int arr[], int d, int n){
    
   // Your code here
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}


int main() {

	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    
	}
	
	return 0;
}