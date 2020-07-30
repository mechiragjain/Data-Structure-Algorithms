/*Given a keypad as shown in diagram, and an N digit number. List all words which are possible by pressing these numbers.*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

void possibleWords(int a[],int n);


int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	  possibleWords(a,N);
	   cout << endl;
	}
	
	return 0;
}

const char numberPad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 

void printPossibleWords(int a[],int current, char words[], int n){
    if(current==n){
        cout<<words<<" ";
        return;
    }
    for(int i=0;i<strlen(numberPad[a[current]]);i++){
        words[current]=numberPad[a[current]][i];
        printPossibleWords(a,current+1,words,n);
        if(a[current]==0 || a[current]==1)
            return;
    }
}


void possibleWords(int a[],int N)
{
    char words[N+1];
    words[N]='\0';
    printPossibleWords(a,0,words,N);
}