/*
GCD/HCF
Euclidean Algorithm
gcd(a,b) = gcd(a-b,b) or gcd(a%b.b)
proof can be by mathematical induction

eg gcd(72,24) = gcd(48,24) = gcd(24,24) = gcd(0,24) thus 24
*/


#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a==0){
        return b;
    }
    if (b==0){
        return a;
    }

    while (a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){

    int a,b;
    cout << "Enter the values of a and b " << endl;
    int ans = gcd(a,b);
    cout << "The GCD of" << a << " & " << b << " is: " << ans << endl;
}

// gcd(a,b) * lcm(a,b) = a*b

//reference
//https://www.codingninjas.com/codestudio/library/gcd-euclidean-algorithm
