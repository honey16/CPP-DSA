/*
LIFO - Last In First Out

*/

#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout << "top element" << s.top() << endl;
    //kumar
    s.pop();
    cout << "top element" << s.top() << endl;
    //babbar

    cout << "size of stack" << s.size() << endl;

    cout << "Empty or not" << s.empty() << emdl;


}