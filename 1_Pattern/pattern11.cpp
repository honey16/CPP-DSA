#include <iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin >> n;
    while (i<=n){
        int j=1;
        while(j<=n){
            char ch = 64 + i +j-1;    // or 'A' +i+j-1-1;
            cout << ch;
            j=j+1;
        }
        i=i+1;
        cout << endl;
    }
}

//DO this by Q13 approach easy find first item the increment it