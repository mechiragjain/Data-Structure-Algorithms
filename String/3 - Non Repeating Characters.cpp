#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    
        char ans = nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

char nonrepeatingCharacter(string S)
{
    int result[256],res=INT_MAX;
    for(int i=0;i<256;i++)
        result[i]=-1;
    for(int i=0;i<S.length();i++){
        if(result[S[i]]==-1)
            result[S[i]]=i;
        else
            result[S[i]]=-2;
    }
    for(int i=0;i<256;i++)
        if(result[i]>=0)
            res=min(res,result[i]);
    return (res==INT_MAX)?'$':S[res];
}
