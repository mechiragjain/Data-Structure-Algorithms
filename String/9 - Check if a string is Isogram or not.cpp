/*Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.*/

#include<bits/stdc++.h>
using namespace std;

bool isIsogram(string s);

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        
        cout<<isIsogram(s)<<endl;
        
    }
	return 0;
}

bool isIsogram(string s)
{
    int count[256]={0};
    int n=s.length();
    for(int i=0;i<n;i++){
        count[s[i]]++;
        if(count[s[i]]>1)
            return false;
    }
    return true;
}