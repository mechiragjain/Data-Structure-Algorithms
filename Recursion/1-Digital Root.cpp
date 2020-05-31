/*You are given a number n. You need to find the digital root of n.
DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
Eg.DigitalRoot(191)=1+9+1=>11=>1+1=>2*/


#include <iostream>
using namespace std;

int sumOfDigits(int n){
    if(n<10)
        return n;
    return (n%10+sumOfDigits(n/10));
}

int digitalRoot(int n)
{
    if(n<10)
        return n;
    
    return digitalRoot(sumOfDigits(n));
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}