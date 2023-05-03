/*
num = 5;
num is mapped to address let 120 where 5 is stored in a block of memory
memory - symbol table

pointer stores address

*/

#include <iostream>
using namespace std;

int main(){
    int nm = 6;
    cout << nm << endl;

    //address of Operator - &
    cout << "Address of nm is " << &nm << endl;
    // Output 0x61ff0c (hexadecimal)

    /*
    int *ptr = &num;
    declare pointer  = address

    int *ptr; is bad practise
    if no value just initilaze with 0

    then num ++ and (&p)++ will do same thing
    
    int *p -- p is a pointer to int

    char ch = 'a';
    char *p = &ch     ie same type


    */
    int num = 5;
    int *p = &num;
    cout << num << endl;
    cout << *p << endl;   //same value o/p
    //derefrence operator

    //cout << p;
    //0x61ff04

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(p) << endl;


}