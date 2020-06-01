/*Given an integer x. The task is to find the square root of x. If x is not a perfect square, then return floor(√x).*/

#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);

long long int floorSqrt(long long int x) 
{
    if (x == 0 || x == 1) 
	    return x; 
    long long int ans=1;
    long long int left=1,right=x;
    while(left<=right){
        long long int mid=left+(right-left)/2;
        if((mid*mid) == x)
            return mid;
        if((mid*mid) < x){
            left=mid+1;
            ans=mid;
        } else {
            right=mid-1;
        }
    }
    return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}