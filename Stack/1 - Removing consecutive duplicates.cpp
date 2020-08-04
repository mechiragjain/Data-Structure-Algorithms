/*You are given a string str. You need to remove the consecutive duplicates.*/

#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveDuplicates(string s)
{
    // Your code here
    stack <char> stc;
    string res="";
    int i=0;
    stc.push('@');
    while(i<s.length()){
        if(stc.top()!=s[i]){
            stc.push(s[i]);
            res+=s[i];
        }
        i++;
    }
    return res;
}


int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        cout<<removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}