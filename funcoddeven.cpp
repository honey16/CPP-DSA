//Note 
/*
A number is odd if n&1 = true


A function to check whether odd or even

*/
#include <iostream>
using namespace std;

bool isEven(int a){
    //odd
    if (a&1) {
        return 0;
    }

    return 1;
}

int main(){
    int num;
    cin >> num;

    if (isEven(num)){
        cout << "Number is even";
    }
    else {
        cout << "number is odd";
    }
}