/*
doubly linklist
we cannot access elements directly we have to traverse

*/

#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l;
    l.push_back(1);   //right  
    l.push_front(2);  //left   
    // 2 1

    for (int i:l){
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    // delete now single element ie 2 here
    
    cout << "After erase" << endl;
    for (int i:l){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list" << l.size() << endl;

    //other initialization
    list<int> n(5,100);   //5 times 100 in list
    // 100 100 100 100 100

    



}