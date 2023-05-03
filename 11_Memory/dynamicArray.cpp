/*

https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381146

int n;
cin >> n;
int arr[n];  bad practice
as we are telling size of array in the runtime
we should know size in compile time  (int arr[100];  (static memory allocation))

when program starts it has stack (small, depend on compile req) and heap memory (big)

So initally, small stack memory was created. when it has to be given big size of array it may crash

So to make variable size array use heap memory

To use heap memory use 'new' keyword
new char;   char in dynamic memory allocation
address return 
cannot give name by this definition
thus use pointer to access and name
pointer bock will be in stack memory

Note : Pointer takes 8 byte in 64 bit system and 4 byte in 32 bit system


char *ch = new char;
(8byte)    (4byte)   Total 12 byte allocate

eg
int *arr = new int[5];
8 byte       20 byte        thus 28 bytes 
static        dynamic  

*/

#include <iostream>
using namespace std;

int getSum(int *arr, int n) {
    //learn passing pointer in function in depth (with array pointer)
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main() {

    int n;
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

//case 1
    while(true) {
        int i = 5;
    }  //memory created and deleted after a loop
    
//case 2
    while(true) {
        int* ptr = new int;
    } 
    //stack free but heap not so 4bytes keep adding





    return 0;
}

/*
Difference in Static and Dynamic allocation
Static
int arr[50];
200 byte
memory automatically release
Array deletion  delete i;


Dynamic
int *arr = new int[50];
208 byte
manual removal from memory
delete []arr;

*/