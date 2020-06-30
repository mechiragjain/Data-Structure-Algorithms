/*Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.*/

#include <bits/stdc++.h>
using namespace std;


void rearrange(int *arr, int n) 
{ 
	
	// Your code here
	int maxIndex=n-1,minIndex=0,max=arr[n-1]+1;
	 for(int i=0;i<n;i++){
	     if(i%2==0){
	         arr[i]+=(arr[maxIndex]%max)*max;
	         maxIndex--;
	     } else{
	         arr[i]+=(arr[minIndex]%max)*max;
	         minIndex++;
	     }
	 }
	 for(int i=0;i<n;i++)
	    arr[i]=arr[i]/max;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        rearrange(arr, n);
        
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
}