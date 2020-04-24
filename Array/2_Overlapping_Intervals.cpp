//Problem

/*Given a collection of Intervals,merge all the overlapping Intervals.
For example:

Given [1,3], [2,6], [8,10], [15,18],
return [1,6], [8,10], [15,18].

Make sure the returned intervals are sorted.

Input:
The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the number of Intervals and next line followed by the intervals starting and ending positions 'x' and 'y' respectively.

Output:
Print the intervals after overlapping in sorted manner.  There should be a newline at the end of output of every test case.

Example:

Input
2
4
1 3 2 4 6 8 9 10
4
6 8 1 9 2 4 4 7

Output
1 4 6 8 9 10
1 9 */


//Solution

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin>>testCases;
    while(testCases){
        int size, first, second;
        vector<pair <int,int>> points;
        vector<pair <int,int>> res;
        cin>>size;
        
        for(int i=0;i<size;i++){
            cin>>first>>second;
            points.push_back(make_pair(first,second));
        }
        sort(points.begin(),points.end());
        res.push_back(points[0]);
        for(int i=1;i<points.size();i++){
            if(res[res.size()-1].second>=points[i].first){
                if(res[res.size()-1].second<points[i].second){
                    res[res.size()-1].second=points[i].second;
                }
            }else{
                res.push_back(points[i]);
            }
        }
        //sort(points.begin(),points.end());
        for(int i=0;i<res.size();i++){
            cout<<res[i].first<<" "<<res[i].second<<" ";
        }
        cout<<endl;
        testCases--;
    }
    
	return 0;
}
