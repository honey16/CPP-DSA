#include <iostream>
#include <vector>
using namespace std;

/*
https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTab=1
*/
void reverseArray(vector<int> &arr , int m){
//&arr is name of vector so while using it it will be arr
    int s = m+1;
    int e = arr.size()-1;

    while ( s<=e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}


void print(vector<int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    int m = 2;
    vector<int> ans = reverse(v,m);
    cout << "printing reverse Array" << endl;
    print(ans);
    
} 