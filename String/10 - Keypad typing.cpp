/*You are given a string S of alphabet characters and the task is to find its matching decimal representation as on the shown keypad. Output the decimal representation corresponding to the string. For example: if you are given “amazon” then its corresponding decimal representation will be 262966.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int testCases;
	cin>>testCases;
	while(testCases--){
	    string str;
	    cin>>str;
	    for(int i=0;i<str.length();i++){
	        if(str[i]>='a'&&str[i]<='c')
                cout<<2;
            else if(str[i]>='d'&&str[i]<='f')
                cout<<3;
            else if(str[i]>='g'&&str[i]<='i')
                cout<<4;
            else if(str[i]>='j'&&str[i]<='l')
                cout<<5;
            else if(str[i]>='m'&&str[i]<='o')
                cout<<6;
            else if(str[i]>='p'&&str[i]<='s')
                cout<<7;
            else if(str[i]>='t'&&str[i]<='v')
                cout<<8;
            else if(str[i]>='w'&&str[i]<='z')
                cout<<9;
	    }
	    cout<<endl;
	}
	return 0;
}