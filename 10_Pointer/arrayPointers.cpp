/*
int arr[10];   storage 4x10 = 40 bytes in memory
name of array will depict the address of first location of array ie address of arr[0]

*/

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {7,78,9,9,88};
    cout << "Address of first memory block is" << arr << endl;
    cout << "Address of first memory block is" << &arr[0] << endl;
    //this will also give same output

    cout << *arr << endl;
    //prints value at first location
    cout << *arr+1 << endl;
    //increments arr first element

    cout << *(arr+1) << endl;
    //returns value at second position

    cout << *(arr)+1 << endl;
    //exactly same as *arr+1;
    


/*

Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc. 

arr[i] = *(arr+i) or
i[arr] = *(i+ arr)  is same  ***

difference
int arr[10];     40 bytes
int *p = &arr[0];   8 bytes
1. size
sizeof() -- arr[] - size x 4 bytes
         -- ptr - 8 bytes
         -- *ptr - 4 bytes as int value
         -- &ptr - 8 byte as pointer
Note all pointers take 8 bytes

* matlab kya pada
& matlab address  same as pointer name

2.  

*/



    int a [20] = {1,2,3,5};
    
    //all three same give address of first element
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;


    /*
    _ _ _ _ _ 
    arr[0] address let say 710
    int *p = &arr[0] 
    makes new block with address let say 810 having address of 710
    so &p will give 810 (address of p wala block)


    refer notes
    */
    int *p = &a[0];
    cout << p << endl;  
    cout << *p << endl;
    cout << &p << endl;

    /*
    3. Symbol table ka content cannot be changed
    arr = arr +1 - error

    */
    cout << endl;
    int arr[10] = {1,2,3,4,5};

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr +1;   // add 4 btye
    cout << ptr << endl;
    cout << *ptr << endl;

    //ie simple table me plus nahi hoga ie arr = arr +1 x  
    //but pointer me ho jaiga ptr = ptr +1 if int + 4 byte (and next index me)

    


}