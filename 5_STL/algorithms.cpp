#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //binary search
    cout << "finding 6" <<binary_search(v.begin(),v.end(),6) << endl;
    //1

    //lower bound (pointing to the first element in the range [first,last) which has a value not less than ‘val’)
    //returns iterator
    cout << "lower bound" << lower_bound(v.begin(),v.end(),6)-v.begin() << endl;

    //upper bound (first element in the range [first,last) which has a value greater than ‘val’)
    cout << "lower bound" << upper_bound(v.begin(),v.end(),6)-v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max" << max(a,b);
    cout << "min" << min(a,b);

    swap (a,b);
    // a 5  b 3

    sring abc = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string" << abcd << endl;
    //dcba

    //rotate(iteratorstart,itmiddle,itlast)
    rotate(v.begin(),v.begin()+1,v.end());
    cout << "after rotate" << endl;

    for (int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    //sort based on Introsort (Quick,Heap and Insertion Sort)
    sort(v.begin(),v.end());
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;

    
}