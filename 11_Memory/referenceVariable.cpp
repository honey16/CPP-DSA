/*
Reference Variable
pointing to same memory but different names

int i = 5;
reference variable
int &j = i; 

why need?
in function pass by value a copy is made so updation is not reflected in main (pass by value)

using pass by reference it located to the same memory so updation reflects on both

input aur output dono me reference variable de sakte 
int update(int& n)  
int& update(int n) //but this is bad practice know why?  may also give warning



*/

#include<iostream>
using namespace std;

int& func(int a) {  //warning
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {  //warning learn more
    int* ptr = &n;
    return ptr;
}

void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}

int main() {

    /*
    int i = 5;
    //create a ref variable 
    int& j = i;
    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << i << endl; 
    cout << j << endl;
    */

   int n = 5;
   
   cout << "Before " << n << endl;
   update2(n);
   cout << "After " << n << endl;


    fun(n);

    return 0;
}