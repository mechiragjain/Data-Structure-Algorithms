/*The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days*/

#include<bits/stdc++.h>
using namespace std;

vector <int> calculateSpan(int price[], int size)
{
   stack<int> s;
   vector<int> span;
   for(int i=0;i<size;i++){
        while(s.empty()==false && price[s.top()]<=price[i])
            s.pop();
        int difference=s.empty()?i+1:(i-s.top());
        span.push_back(difference);
        s.push(i);
    }
    return span;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		vector <int> s = calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends