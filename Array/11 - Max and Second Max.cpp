/*Given an array arr[] of size N of positive integers which may have duplicates. The task is to find the maximum and second maximum from the array, and both of them should be distinct, so If no second max exists, then the second max will be -1.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;

     max=arr[0];
     max2=arr[1];
     for(int i=0;i<sizeOfArray;i++){
        if(max<arr[i]){
            max2=max;
            max=arr[i];   
        }
        else if((arr[i] > max2 && arr[i] != max)||max==max2)
            max2=arr[i];
     }
     vector<int> result;
    result.push_back(max);
    if(max==max2)
        result.push_back(-1);
    else
        result.push_back(max2);
    return result;
}


int main() {

	int testcases;
	cin >> testcases;

	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
} 