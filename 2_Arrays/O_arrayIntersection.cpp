/*
https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

Two arrays A, B size N and M Sorted in Ascending Order
Find intersection
If intersection not present return -1

Solution
HashMap wo sab optimised sol dega

for now
check elemet of A with each in B, if present map it and update it with any other value so it cannot be mapped again
ie push back in vector
*/

//To learn about this topic


#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // 2 Pointer Approach In Array {Important}
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {     // we can use multiple conditions in while loop
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}