#include <iostream>
#include <array>
using namespace std;

int main(){
    int basic[4] = {1,2,3,4};
    //Not used in CP as static
    //Write more
    array<int,4> a = {1,2,3,4};
    //Why used?

    int size = a.size();

    for (int i = 0; i<size; i++){
        cout << a[i] << endl;

    }
    //O(1)
    cout << "element at 2nd Index" << a.at(2) << endl;
    
    cout << "Empty or not" << a.empty() << endl;

    //return first element
    cout << "First Element" << a.front() << endl;

    cout << "Last element" << a.back() << endl;
}