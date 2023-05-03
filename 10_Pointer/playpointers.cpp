#include<iostream>
using namespace std;

int main () {

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;
    //segmentation fault error

    /*
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;         // these two lines is same as initialize as int *q = &i;

    cout << p << endl;
    cout << *p << endl;
    */

   int num = 5;
   int a = num;
   cout << "a before " << num << endl;
   a++;
   cout << "a after " << num << endl;
   //as a is copy


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;   //new pointer is q
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;
   //both will be same

   //important concept
   int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl;
   *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;
    //4 byte age badh jaiga (very important)
    //ie +1 pe gle int size pe chala jaiga
    //agar double then 8  badh jaiga +1 pe
    //alge int/char/.. location 
}