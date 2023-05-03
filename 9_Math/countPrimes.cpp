/*
https://leetcode.com/problems/count-primes/
*/

/*
class Solution {
private:
bool isPrime(int n) {

    if(n<=1)
    return false;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
public:

    int countPrimes(int n) {
        int cnt =0;
        for (int i = 2; i<n; i++){
            if (isPrime(i)){
                cnt++;
            }
        }
        return cnt;

    }
};

//TLE
*/

//sieve of Eratosthenes
/*
n =40
mark every no as a prime number

01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40

jo prime hai usko rakho aur uske multiple htado

start n from 2 we know prime
thus cross every multiple of 2 (non prime)

3 take as prime and cross every multiple of 3

5 yes remove 10 15 20 25 30 35 40
and so on
ans =12
*/

class Solution {
public:
    int countPrimes(int n) {
        
        int cnt = 0;
        vector<bool> prime(n+1, true);  //why n+1

        prime[0] = prime[1] = false;

        for (int i=2; i<n; i++){

            if(prime[i]){
                cnt++;
                for (int j=2*i; j<n; j=j+i){
                    //this for loop indicates table of that number
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};

//complexity 
/*
n - total
so  n/2 + n/3 + n/5  +n/7 ..
n ( 1/2 + 1/3 + 1/5 ...) HP of prime numbers'
by taylors and hp sum

O( N log(logN)) - Important
*/


#include<iostream>
#include<vector>
using namespace std;

//using Sieve
void sieve(bool prime[]) {

    //setting TRUE for every number
    for(int i=2;i<=1000000;i++){
        prime[i]=1;
    }

    for(int i = 2; i<=1000000; i++) {

        if(prime[i]){
            //iske saare multiple mark krde - non prime
            for(int j = 2*i; j<=1000000; j+=i){
                prime[j] = 0;   
            }
        }
    }
    prime[0] = prime[1] = 0;
}

int main() {

    bool prime[1000001];
    sieve(prime);

    int n;
    cin >> n;
    while(n!=-1) {
        if(prime[n]) {
            cout << "It is a Prime Number" << endl;
        }
        else{
            cout << " It is not a Prime Number" << endl;
        }
        cin >> n;
    }

    return 0;
}