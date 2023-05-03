/*
Queue with first element being greatest always
relates to  heap
default priority queue - max heap
to take out elements either make max heap or min
in max heap element taken out will be max
in min heap fetched element will be min

*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    //for maxi
    int n = maxi.size();
    for (int i = 0; i<n; i++){  // cannot write size() here as after pop it is changing
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    //output 3 2 1 0

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for (int i = 0 ; i<m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    // 0 1 3 4 5 

    cout << "Empty or not " <<mini.empty();
}