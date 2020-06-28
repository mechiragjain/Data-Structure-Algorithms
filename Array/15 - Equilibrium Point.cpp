/*Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array.*/

#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

int equilibriumPoint(long long a[], int n) {

    if(n==1)
        return 1;
    int sum=0,left=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    for(int j=0;j<n;j++){
        sum-=a[j];
        if(sum==left)
            return j+1;
        left+=a[j];
    }
    return -1;
}