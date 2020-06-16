/*You are given a string S (both uppercase and lowercase characters). You need to print the repeated character whose first appearance is leftmost.*/

#include <bits/stdc++.h>
using namespace std;

int repeatedCharacter (string s) 
{ 
    int res=INT_MAX;
    int result[256];
    for(int i=0;i<256;i++)
        result[i]=-1;
    for(int i=s.length();i>=0;i--){
        if(result[s[i]]==-1)
            result[s[i]]=i;
        else
            res=result[s[i]];
    }
    return (res==INT_MAX)?-1:res;
} 


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int index = repeatedCharacter(s); 
        if (index == -1) 
            cout<<-1<<endl;
        else
            cout<<s[index]<<endl;
	}
	return 0;
}