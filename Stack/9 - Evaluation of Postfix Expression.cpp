/*Given a string representing a postfix expression, the task is to evaluate the expression and print the final value. Operators will only include the basic arithmetic operators like *,/,+ and -.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


int doOperation(char op, int a, int b)
{
    switch(op)
    {
    case '+':
       return a+b;
    break;
    case '-':
       return a-b;
    break;
    case '*':
       return a*b;
    break;
    case '/':
       return a/b;
    break;
    }
 }

int evaluatePostfix(string &str)
{
    // Your code here
    stack<int> st;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i]))
            st.push(str[i]-'0');
        else{
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            st.push(doOperation(str[i],y,x));
        }
    }
    return (st.top());
}

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}