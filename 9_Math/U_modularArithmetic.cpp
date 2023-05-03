/*
Reference
https://codeforces.com/blog/entry/72527

We know a%n  [0 --> n-1]

(a+b)%m = a%m + b%m
a%m - b%m = (a-b)%m
a%m * b%m = (a*b)%m

*/

//Fast Exponentiation a^b
/*
    a^b  - (a^b/2)^2       b even
         - (a^b/2)^2 * a   b odd
    
https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7
ie given x,n,m find  (x^n)%m

Note instead of /2 use a >> 1
*/

#include<iostream>
using namespace std;

int fastExpo(int a, int b ) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            //odd
            res = res*a;
        }
        b = b >> 1;
        a = a * a; 
    }
    return res;
}

int main() {

    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "Answer is: " << fastExpo(a,b) << endl;

    return 0;
}