/*Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s.*/

#include <bits/stdc++.h>

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

int strstr(string s, string x)
{
    for(int i=0;i<s.length();i++){
        int j;
        for(j=0;j<x.length();j++)
            if(s[i+j]!=x[j])
                break;
        if(j==x.length())
            return i;
    }
    return -1;
}