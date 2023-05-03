/*
D
CD
BCD
ABCD

Relation : 
row starts : 'A' +n-i   and increment this

*/


#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin >> n;
    while (i<=n){
        int j=1;
        char ch = 'A'+n-i;
        while (j<=i){
            cout << ch;
            j=j+1;
            ch = ch +1;
        }
        i=i+1;
        cout << endl;
    }
}