/*
https://leetcode.com/problems/move-zeroes/

[0,1,0,3,12]
[1,3,12,0,0]

swap approach
[0,1,0,3,12,0] 
i 
j=0 ignore and j++
j!=0 swap and j++
till j<n
use i to traverse
*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& nums){
    //shift all nonzero element to left by this variable
    int nonZero = 0;  //asumming first nonzero at 0
    for (int j = 0; j<nums.size(); j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }
}

int main(){

}

