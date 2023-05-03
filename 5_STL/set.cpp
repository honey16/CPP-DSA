/*
Store unique element only once
no modification
only isertion and deletion
elements returned in sorted order (sorted set)

set slower than unordered set
*/

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    //insert complexity O(log N) as binary search
    
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;
    // 0 1 5 6

    //s.erase(s.begin());
    // 1 5 6

    set<int>::iterator it = s.begin();
    it++;
    //ye ky h
    //now it 1
    s.erase(it);
    //0 5 6
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not" << s.count(5) << endl;

    //find returns iterator
    set<int>::iterator itr = s.find(5);

    for (auto it=itr; it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //insert,find,erase,count  Complexity O(log N)
    //size,begin,end,empty    O(1)



}