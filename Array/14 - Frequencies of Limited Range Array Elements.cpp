/*Given an array A[] of N positive integers which can contain integers from 1 to N where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.*/

#include<bits/stdc++.h> 
using namespace std; 

vector<int> printfrequency(int arr[], int n)
{ 

	int count=0,res=1;
	vector<int> freq;
	sort(arr,arr+n);
	int array[n]={0};
	for(int i=0;i<n;i++){
	    array[arr[i]-1]+=1;
	}
	for(int i=0;i<n;i++)
	    freq.push_back(array[i]);
	return freq;
} 


int main() 
{ 
	long long t;
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    vector<int> ans = printfrequency(arr,n); // print frequency of elements 
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	}
	
	return 0; 
}