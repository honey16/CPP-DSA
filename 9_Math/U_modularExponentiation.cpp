/*
https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7

*/

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int res = 1;

    while (n>0){

        if (n&1){
            //odd
            res = ( 1LL * (res) * (x)%m)%m;
        }
        //for even
        x = ( 1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}


//Discussion Solution

long ans =1;

         while(n){

             if(n&1) ans=(ans*x)%m;

             x=(x*x) % m;

             n >>= 1;

         }

         return ans;