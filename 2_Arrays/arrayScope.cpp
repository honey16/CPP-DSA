/*
Variable update in function has its scope in the function only
ie. a copy is made for dfunction

but in array changed as
update(arr,3)
arr is bas address say 100 and adress is given to function
so any updation is adone in actual array itself
*/

#include<iostream>
using namespace std;

void update(int arr[], int n) {

    cout << endl << "Inside the function" <<endl;
    
    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    } cout<<endl;


    cout << "Going back to main function" << endl;
}
