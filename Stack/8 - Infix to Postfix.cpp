/*Given an infix expression in the form of string str. Conver this infix expression to postfix expression.*/

#include<bits/stdc++.h>
using namespace std;


int precedence(char ch){
    if(ch=='^')
        return 4;
    if(ch=='*'||ch=='/')
        return 3;
    if(ch=='+'||ch=='-')
        return 2;
    return -1;
    
}

string infixToPostfix(string s)
{
    // Your code here
    stack<char> st;
    string ans="";
    st.push('(');
    for(int i=0;i<s.length();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]<='A' && s[i]>='Z'))
            ans+=s[i];
        else if(s[i]=='(')
            st.push('(');
        else if(s[i]==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }else{
            if(st.empty() || precedence(st.top())<precedence(s[i]))
                st.push(s[i]);
            else{
                while(st.top()!='(' && precedence(st.top())>=precedence(s[i])){
                    ans+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        if(st.top()!='(')
            ans+=st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}