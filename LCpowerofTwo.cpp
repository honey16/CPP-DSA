/*
Power of Two
Given an integer n, return true if it is a power of two. Otherwise, return false.
-231 <= n <= 231 - 1
An integer n is a power of two, if there exists an integer x such that n == 2x.

Solution
using constraint
*/

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int n =0;
//     cin >> n;
//     for(int i =0; i<=30; i++){
//         int ans=pow(2,i);
//         if (ans ==n){
//             cout << true;
//         }
//     }
//     cout << false;
// }


class Solution {
public:
    bool isPowerOfTwo(int n){
        ins ans =1;

        for(int i=0; i <=30; i++){
            if(ans==n){
                return true;
            }
            if(ans < INT_MAX/2)
            ans = ans *2;
        }
        return false;
    }
};


//optimize this
//bin search

//Power of 2 does not have more than a single bit in their binary form