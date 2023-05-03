/*

*/

#include <iostream>
using namespace std;

void print(int *p){
    cout << p << endl;
}

void update(int *p){
    //p = p+1;   wont work
    *p = *p +1;
}

int getSum(int arr[], int n) {
    cout << "SIZE : " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i<n; i++ ){
        sum += i[arr];
    }
    return sum;
}

int main(){
    
    int value = 5;
    int *p = &value;
    //print(p);

    //cout << " Before " << p << endl;
    //update(p);
    //cout << " After " << p << endl;
    /*
    No updation
    but value can be updated
    */

    cout << " Before " << *p << endl;
    update(p);
    cout << " After " << *p << endl;

    int arr[5] = {1,2,3,4,5};

    cout << "SUM Is " << getSum(arr,5) << endl;
}


// while passing arr in function arr[] is same as *arr (important)
// ie  func(int arr[]) same as func(int *arr)

// why does my sizeof give 4 while love bbabbar gives 8??

//benifit of passing pointer
/*
can pass part of array
eg  getSum (arr+3,3)
*/