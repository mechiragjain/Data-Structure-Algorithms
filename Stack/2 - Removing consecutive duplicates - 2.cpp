/*You are given a string str. You need to remove the pair of duplicates*/

#include <bits/stdc++.h>
using namespace std;

string removePair(string str){
    // Your code here
    string s = "";
      stack < pair<char, int> > stringStack;
      int n = str.size();
      for(int i = 0; i <= n;){
         char x = str[i];
         if(!stringStack.empty() && stringStack.top().second == 2)
            stringStack.pop();
         if(i == n)
            break;
         if(stringStack.empty() || stringStack.top().first != x){
            stringStack.push({x, 1});
            i++;
         } else {
            stringStack.top().second++;
            i++;
         }
      }
      while(!stringStack.empty()){
         pair <char, int> temp = stringStack.top();
         while(temp.second--) 
            s += temp.first;
         stringStack.pop();
      }
      reverse(s.begin(), s.end());
      return s;
}


int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        string ans = removePair (s);
        
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}