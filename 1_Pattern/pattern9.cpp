/*
AAA
BBB
CCC

relation : 'A' + i -1

Press CTRL + k to focus cursor on terminal; Press CTRL + j to focus cursor on coding section


*/

#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cin >> n;
    char ch= 'A';

    while (i<=n) {
        int j = 1;
        while (j<=n){
            char ch = 'A' +i -1;
            cout << ch;
            j=j+1;
        }
        i=i+1;
        cout << endl; 
    }
}