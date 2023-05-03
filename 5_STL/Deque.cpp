/*
Doubly ended queue
beginneing and ending both me deletion, insertionkar sakte
dynamic (increase by 2)
Not cotagious location

*/

#include <iostream>
#include <deque>

int main(){

    deque<int> d;

    //adding elements
    d.push_back(1);
    d.push_front(2);

    for (int i:d){
        cout << i << " ";
    }

    //removing
    //d.pop_front();
    //d.pop_back();

    cout << "element at 2nd Index" << a.at(2) << endl;
    
    cout << "Empty or not" << a.empty() << endl;

    //return first element
    cout << "First Element" << a.front() << endl;

    cout << "Last element" << a.back() << endl;

}
