/*Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.*/

#include<bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    // Your code here
    stack <char> stringStack;
    int n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]=='{' || x[i]=='[' || x[i]=='(')
            stringStack.push(x[i]);
        else{
            if(stringStack.empty())
                return false;
            else if((stringStack.top()=='{' && x[i]=='}') || (stringStack.top()=='(' && x[i]==')') || (stringStack.top()=='[' && x[i]==']'))
                stringStack.pop();
            else
                return false;
        }
    }
    if(stringStack.empty())
        return true;
    return false;
}


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}