#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for (int i=1; i<=n; i++){
        fact = fact *i
    }
    return fact;
}

int nCr(int n, int r){

    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    return ans = num/denom;

}

int main(){

    int n,r;
    cin >> n >> r;
    ans = nCr(n,r);
    cout << "Answer is " << ans;
}

// when function doesnt return any output void <function-name>() is used
