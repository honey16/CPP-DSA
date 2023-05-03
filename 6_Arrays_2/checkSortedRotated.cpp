/*
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

True if array originaly sorted in asc order then rotated some num of position(inc 0) 

Note An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length]

Solution
To check sorted : there exists one pair where nums[i-1]>nums[i]

Cases
I   [1,2,3,4,5] 1 pair nums[i-1] > nums[i]
II  [3,4,5,1,2] 1 pair
III [3,5,7,1,6] 2 pair
IV  [1,1.1]   for this count will be 0 thus use return count <=1
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        for(int i=1;i<nums.size();i++) //using i=1 as statement has i-1
        {
            if(nums[i] < nums[i-1])
                cnt++;
        }
        if(nums[nums.size()-1] > nums[0])
            cnt++;
        
        return cnt<=1;
    }
};

