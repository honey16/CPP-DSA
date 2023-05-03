/*
FIFO - First In First Out
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << "First Element" << q.front() << endl;
    //love
    q.pop();
    cout << "First Element" << q.front() << endl;
    //babbar
    
    cout << "size after pop" << q.size() << endl;
    
}