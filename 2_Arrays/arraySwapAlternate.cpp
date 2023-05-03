/*
Swap alternate elements of an array

Algorithm

*/

#include <iostream>
using namespace std;


// My Solution
// void alternateSwap(int arr[], int size){
//     int a=0;        
//     int b=1;
//     while (b<=(size-1)){
//         swap(arr[a],arr[b]);     // can also reduce to one variable by a, a+1
//         a=a+2;
//         b=b+2;
//     }

// }
// void printArray(int arr[], int n){
//     for (int i =0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }


// int main(){
//     int arr[9]= {4,5,2,4,6,-2,3,8,9};

//     alternateSwap(arr,9);
//     printArray(arr,9);
// }

//Babbars Solution used only one variable

void printArray(int arr[], int n) {

    for(int i = 0; i<n; i++ ) {
        cout<< arr[i] <<" ";
    }cout<<endl;

}

void swapAlternate(int arr[], int size) {

    for(int i = 0; i<size; i+=2 ) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }

}

int main() {

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);



    return 0;
}

//Swap function breakdown;

/*
temp = arr[i+1];
arr[i+1]=arr[i];
arr[i]=temp;
*/