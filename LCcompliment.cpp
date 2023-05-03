// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

//     For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

// Given an integer n, return its complement.

//Solution (bitmasking Solution)

//first create a mask (0s with 1 equal to binaries) then ~n & with mask to get compliment
//eg    n=5  000....000101      5

//      ~n   111....111010
//     maskn 000....000111
//  ~n&mask  000....000010      2

// To create mask (1 till last 1 in n)
//right shift till n=0 and then left shift and or with 1 last then right sift.
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int m=n;
    int mask =0;

    if (n==0){     //edgecase
        cout << 1;
    }

    while (m!=0){
        mask = (mask <<1)|1;
        m=m>>1;      // to make n 0 (ie to get right amount of 1)   
    }

    int ans = (~n)&mask;
    cout << ans;


}
