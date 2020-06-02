/*Given an array a[ ] of size N. The task is to find the median and mean of the array elements. Mean is average of the numbers and median is the element which is smaller than half of the elements and greater than remaining half.  If there are odd elements, median is simply the middle element. If there are even elements, then median is floor of average of two middle numbers. If mean is floating point number, then we need to print floor of it.*/

#include<bits/stdc++.h>
using namespace std;


//User function Template for C++

int median(int A[],int N)
{
    
    sort(A,A+N);
    if(N%2!=0)
        return A[N/2];
    return floor((A[(N - 1) / 2] + A[N / 2]) / 2);
}

int mean(int A[],int N)
{
    int avg=0;
    for(int i=0;i<N;i++){
        avg+=A[i];
    }
    avg/=N;
    return avg;
}


int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}