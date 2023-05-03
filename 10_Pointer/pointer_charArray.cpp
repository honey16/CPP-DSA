/*


*/

#include <iostream>
using namespace std;

int main(){

    int arr[5] =  {1,2,3,4,5};
    char ch[6] = "abcde";
    // 6 as last is null character
    
    cout << arr << endl;
    //prints address
    cout << ch << endl;
    //print entire content

    
    //ie cout function implemented differently for int arr and character arr

    char *c = &ch[0];
    cout << c << endl;
    //print entire string (not address of 0 as in int arr)


    //when no null character found
    char temp = 'z';
    char *poi = &temp;
    cout << poi << endl;
    //here it will not stop printing until it finds a null character so it goes to abcde also

    //char *c = "abcde" //never do this
    
}