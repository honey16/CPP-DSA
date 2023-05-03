// input a,b,opertation

#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter value of a" << endl;
    cin >> a;

    cout << "Enter value of b" << endl;
    cin >> b;

    char op;
    cout << "Enter operation" << endl;
    cin >> op;

    switch (op){

        case '+': cout << (a+b) << endl;
                    break;

        case '-': cout << (a-b) << endl;
                    break;

        case '*': cout << (a*b) << endl;
                    break;

        case '/': cout << (a/b) << endl;
                    break;

        case '%': cout << (a%b) << endl;
                    break;

        default: cout << "Enter valid operation"<< endl;
    }
}