/*Given two strings s1 and s2. Modify both the strings such that all the common characters of s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.*/

#include <bits/stdc++.h> 
using namespace std; 

string concatenatedString(string, string);

int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	string res = concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

string concatenatedString(string s1, string s2) 
{ 
    string s="";
    map<char, int> count;
    for(int i=0;i<s2.length();i++)
        count[s2[i]]=1;
    for(int i=0;i<s1.length();i++){
        if(count.find(s1[i])==count.end())
            s+=s1[i];
        else
            count[s1[i]]=2;
    }
    for(int i=0;i<s2.length();i++){
        if(count[s2[i]]==1)
            s+=s2[i];
    }
    if(s.empty())
        return "-1";
    else
        return s;
}
