/*
https://leetcode.com/problems/rotate-array/
Medium

Integer array nums, rotate the array to right by k steps (k non negative)
eg nums = [1,2,3,4,5,6,7], k=3
[5,6,7,1,2,3,4]

Solution 
Clearly each element shifted by k in cyclic order

***if no space in last element
use mod %
%n ans : [0 - (n-1)]
%10 : [0 - 9]
69 % 10 = 9
Also index of array 0 to n-1

So to place element at n-1 to nth index
nth % n = required index
where nth is array_index + k

To shift ith term in cyclic manner by k positon:
arr[(i+k)%n] = arr[i]


*/

void rotate(vector<int>& nums, int k){
    vector<int> temp(nums.size());

    for (int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()] = nums[i];
    }
    //copy temp into num vector
    nums = temp;
}

// we used a temporary vector to avoid overwriting
//dry run in pdf lec 20



