/*Given N integer ranges, the task is to find the maximum occurring integer in these ranges. If more than one such integer exits, print the smallest one. The ranges are given as two arrays L[] and R[].  L[i] consists of starting point of range and R[i] consists of corresponding end point of the range.*/

#include <bits/stdc++.h>
using namespace std;

int maxOccured(int L[], int R[], int n, int maxx){

    int arrA[maxx+1]={0};
    int first=0,last=0;
    for(int i=0;i<n;i++){
        int l = L[i]; 
        int r = R[i]; 
        arrA[l] += 1; 
        arrA[r + 1] -= 1; 
  
        first = min(first, l); 
        last = max(last, r); 
    }
    int max=0,res=0;
    for(int i=first;i<=last;i++){
        arrA[i]+=arrA[i-1];
        if(max<arrA[i]){
            res=i;
            max=arrA[i];
        }
    }
    return res;
    
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int L[n];
	    int R[n];
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    
	    cout << maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}