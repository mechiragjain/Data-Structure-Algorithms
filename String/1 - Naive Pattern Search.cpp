#include<bits/stdc++.h> 

using namespace std; 


bool search(string pat, string txt) 
{ 
    int m = pat.length(); 
    int n = txt.length(); 
    for (int i=0; i<=n-m; i++) { 
        int j;
        for (j=0; j<m; j++) 
            if (txt[i + j] != pat[j]) 
                break; 
  
        if (j == m)
            return true;
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