/*Given a string S and a pattern P of lowercase characters. The task is to check if pattern is present in string or not.*/

#include<bits/stdc++.h>

using namespace std;

bool search(string, string, int);

// d is the number of characters in the input alphabet 
#define d 256 

bool search(string pat, string txt, int q) 
{ 
	int val=1;
	for(int i=0;i<pat.length()-1;i++)
	    val=(val*d)%q;
	int p=0,t=0;
	for(int i=0;i<pat.length();i++){
	    p=(p*d+pat[i])%q;
	    t=(t*d+txt[i])%q;
	}
	for(int i=0;i<=txt.length()-pat.length();i++){
	    if(p==t){
	        bool temp=true;
	        for(int j=0;j<pat.length();j++){
	            if(txt[i+j]!=pat[j]){
	                temp=false;
	                break;
	            }
	        }
	        if(temp==true)
	            return true;
	    }
	    if(i<txt.length()-pat.length()){
	        t=(d*(t-txt[i]*val)+txt[i+pat.length()])%q;
	        if(t<0)
	            t=t+q;
	    }
	}
	return false;
} 

int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
	    string s, p;
	    cin >> s >> p;
	    int q = 101; // A prime number 
	    if(search(p, s, q)) cout << "Yes" << endl;
	    else cout << "No" << endl;
    }
	return 0; 
}