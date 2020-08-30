/*Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<string> generate(ll n)
{
	// Your code here
	queue<string> q;
	vector<string> ans;
	ans.push_back("1");
	n--;
	q.push("10");
	q.push("11");
	while(n--){
	    string temp=q.front();
	    q.pop();
	    ans.push_back(temp);
	    q.push(temp+"0");
	    q.push(temp+"1");
	}
	return ans;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends