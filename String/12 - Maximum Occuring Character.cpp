/*Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.*/

#include <bits/stdc++.h>

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}

char getMaxOccuringChar(char* str)
{
    string arr(str);
    char max;
    int res=0;
    int count[256]={0};
    for(int i=0;i<arr.length();i++){
        count[arr[i]]++;
        if(res<count[arr[i]]){
            res=count[arr[i]];
            max=arr[i];
        } else if(res==count[arr[i]]){
            if(max>arr[i])
                max=arr[i];
        }
    }
    return max;
}
