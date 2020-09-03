/*Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K*/

#include <bits/stdc++.h>
using namespace std;


vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k;i<n;i++){
        ans.push_back(arr[dq.front()]);
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    return ans;
}



int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends