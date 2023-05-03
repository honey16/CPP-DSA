/*
key value pair
key unique
same key cannot point to 2 values

*/

#include <iostream>
#include <map>
using namespace std;

int main(){
    
    map<int,string> m;

    m[1]="babbar";
    m[2]="love";
    m[13]="kumar";


    //another method
    m.insert({5,"bheem"});

    //sorted in case of map (sorted map)
    for (auto i:m){
        cout << i.first << endl;
    }

    cout << "finding 13" << m.count(13) << endl;

    //erasing
    m.erase(13);
    for (auto i:m){
        cout << i.first << endl;
    }
    cout << endl;

    //insert,find,count  complexity : O(log N)
    //red black tree 

    //unordered map me O(1)
    //hash table

    //find returns iterator
    auto it = m.find(5);

    for (auto i=it; i!=m.end(); i++){
        cout << (*i).first << endl;
    }

}