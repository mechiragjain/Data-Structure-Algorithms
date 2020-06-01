/*Given an array A of N integers. The task is to find a peak element in it in O( log N ) .
An array element is peak if it is not smaller than its neighbours. For corner elements, we need to consider only one neighbour.*/

#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
   if(n<=1)
    return n;
   int left=0,right=n-1;
   while(true){
        int mid=left+(right-left)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
            return mid;
        if(mid>0 && arr[mid]<arr[mid-1])
            right=mid-1;
        else
            left=mid+1;
            
   }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}