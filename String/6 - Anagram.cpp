/*Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string c, string d){
    int count[256]={0};
    for(int i=0;i<c.length();i++){
        count[c[i]]++;
    }
    for(int i=0;i<d.length();i++)
        count[d[i]]--;
    for(int i=0;i<256;i++)
        if(count[i]!=0)
            return false;
    return true;
}


int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}