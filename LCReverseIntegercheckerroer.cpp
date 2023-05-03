// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned)

#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans =0;

    int INT_MAX = 2^31 -1;
    int INT_MIN = -2^31;

    while (x!=0){
        int digit= x%10;

        if ((ans > INT_MAX/10)|| (ans < INT_MIN/10)){
            cout << 0;
        }

        ans = (ans*10)+ digit;
        x=x/10;
        
    }
    cout << ans;
}