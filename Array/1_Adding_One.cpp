//Problem
/*Given a non-negative integer represented as an array of digits. Your task is to add 1 to the number ( increment the number by 1). The digits are stored such that the most significant digit is at the starting index of the array.

Example:
If the array has [4, 5, 6], the resultant array should be [4, 5, 7] as 456 + 1 = 457.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case contains a single integer N denoting the size of the array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the resultant array.

Constraints:
1 ≤ T ≤ 300
1 ≤ N ≤ 107
0 ≤ A[i] ≤ 9

Example:
Input:
2
4
5 6 7 8
3
9 9 9

Output:
5 6 7 9
1 0 0 0*/



//Solution


#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	//code
	int testCases;
	cin>>testCases;
	while(testCases){
	    int size,i,input;
	    cin>>size;
	    vector<int> arr;
	    for(i=0;i<size;i++){
            cin>>input;
            arr.push_back(input);
        }
	    arr[size-1]+=1;
	    int carry=arr[size-1]/10;
	    arr[size-1]=arr[size-1]%10;
	    i=size-2;
	    while(i>=0){
	        if(carry==1){
	            arr[i]+=carry;
	            carry=arr[i]/10;
	            arr[i]=arr[i]%10;      
	        }
	        i--;
	    }
	    if(carry==1){
	        arr.insert(arr.begin(),1);
	    }
	    for(i=0;i<arr.size();i++)
	        cout<<arr[i]<<" ";
	    cout<<endl;
	    testCases--;
	}
	
	return 0;
}
