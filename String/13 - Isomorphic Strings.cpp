/*Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.*/

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}

bool areIsomorphic(string str1, string str2)
{
    map<char, char> res;
    int marked[256]={0};
    if(str1.length()!=str2.length())
        return false;
    for(int i=0;i<str1.length();i++){
        if(res.find(str1[i])!=res.end())
            if(res[str1[i]]==str2[i])
                continue;
            else
                return false;
        else{
            if(marked[str2[i]]==1)
                return false;
            marked[str2[i]]=1;
            res[str1[i]]=str2[i];   
        }
    }
    return true;
}