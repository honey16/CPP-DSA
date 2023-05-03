/*
Dynamic array
when vector is full it make its size double
by creating new vector of double size and copies prev element and dumps last vector

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    cout << "Capacity" << v.capacity() << endl;

    //To add element
    v.push_back(1);
    cout << "Capacity" << v.capacity() << endl;
    //1

    v.push_back(2);
    cout << "Capacity" << v.capacity() << endl;
    //2 as double of 1

    v.push_back(3);
    cout << "Capacity" << v.capacity() << endl;
    //4 as full so double of 4
    cout << "Size" << v.size() << endl;
    //as 3 elements in vector
    
    cout << "front" << v.front() << endl;

    cout << "back" << v.back() << endl;

    cout << "before pop" << endl;
    for (int i:v){
        cout << i << " ";

    }
    cout << endl;

    v.pop_back();
    //removes last element

    cout << "after pop" << endl;
    for (int i:v){
        cout << i << " ";

    }
    cout << endl;

    //empty vector size 0 but capcity same
    //v.clear();
    //all complexity O(n)

    //another initialization

    vector<int> a(5,1);  //(no,defualt value)
    //vector of size 5 with all 1

    //copy
    vector<int> last(a);
    //ie newvectorname(oldvector)
    
 
}