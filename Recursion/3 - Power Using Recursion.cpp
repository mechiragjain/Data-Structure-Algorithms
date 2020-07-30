/*You are given two numbers n and p. You need to find np.*/
#include <iostream>
using namespace std;

int RecursivePower(int n,int p)
{
    //Your code here
    if(p==0)
        return 1;
    return RecursivePower(n,p-1)*n;
}


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,p;
	    cin>>n>>p;
	    cout<<RecursivePower(n,p)<<endl;
	}
	return 0;
}