/*Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.*/

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void reverseWords(char*);

int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        reverseWords(s);
        cout<<endl;
    }
}

void reverse(char *begin, char *end) 
{ 
    char temp; 
    while (begin < end) { 
        temp = *begin; 
        *begin = *end; 
        *end = temp; 
        *begin++;
        *end--;
    } 
}

void reverseWords(char *s) {
    char *i=s;
    char *j=s;
    while(*j){
        j++;
        if(*j=='.'){
            reverse(i,j-1);
            i=j+1;
        }
    }
    reverse(i,j-1);
    reverse(s,j-1);
    cout<<s;
}
