/*
Lower Right Triangle
important
___*
__**
-***
****

First print spaces: n-i and decrement it after each i
print star 

*/


#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin >> n;

    while (i<=n){

        //Print Spaces
        int space =n-i;
        while (space) {   // This means till space is not 0
            cout << " ";
            space = space -1;
        }

        //Print Star
        int j =1;
        while(j<=i){
            cout << "*";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}