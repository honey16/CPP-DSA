/*
Arr of size N containing elements 1 to N-1
there is single integer present twice 
Find value

eg arr = [1,2,3,4,4]

Solution

arr + [1,2,3...X..N-1, X]
       |------------|
       Cancel this portion to get X
    i.e XOR arr with 1 to N-1
*/

//to get size of array
//arr.size()

//Concept of Vector used*
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}