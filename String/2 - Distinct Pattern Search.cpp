/*Given a string S and a pattern P (of distinct characters) consisting of lowercase characters. The task is to check if pattern P exists in the given string S or not.*/

#include<bits/stdc++.h> 
using namespace std; 

bool search(string pat, string txt) 
{ 
	
    int m = pat.length(); 
    int n = txt.length(); 
    for (int i=0; i<=n-m;) { 
        int j;
        for (j=0; j<m; j++) 
            if (txt[i + j] != pat[j]) 
                break; 
  
        if (j == m)
            return true;
        if(j==0)
            i++;
        else
            i=i+j;
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
	    if(search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}