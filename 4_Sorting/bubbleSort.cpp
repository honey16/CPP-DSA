/*
Bubble Sort
Compare and swap 2 adjacent elements and move forward
After ith round the ith largest element is placed to its correct index
10 1 7 6 14 9 
Round 1     1 10 7 6 14 9
            1 7 10 6 14 9
            1 7 6 10 14 9
            1 7 6 10 14 9
            1 7 6 10 9 14
    After 1 st round first largest element is placed on correct index and so on
    So N-1 rounds 

Round 2     1 7 6 10 9 (ignore)
            1 7 6 10 9 14
            1 6 7 10 9 14
            1 6 7 9 10 14    In round 2 second largest in its correct index

Round 3     1 6 7 9 ( ignore)
            1 6 7 9 10 14
            1 6 7 9 10 14
            1 6 7 9 10 14

so on till round 5
two loops
i 1 to <n
j 0 to <n-i    j 0 to index first arr element

Time Complexity : O(n^2)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n){
    for (int i =1; i<n; i++){
        //For round 1 to n-1

        for (int j=0; j<n-i; j++){
            //process till n-i index
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
    
        }
    }
}

// if i=0 to < n-1
//then j = 0 to < n-i-1

//Optimising Solution
//When array is already sorted, break.
// Best case

void bubbleSort_o(int arr[], int n){
    for (int i =1; i<n; i++){
        //For round 1 to n-1
        bool swapped = false;
        for (int j=0; j<n-i; j++){
            //process till n-i index
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
    
        }
        if (swapped == false){
            break;
        }
    }
    printArray(arr, 7);
}

int main(){
    int arr[7] = {56,43,5,66,78,31,9};
    bubbleSort_o(arr,7);

}

/*
HW check whether stable or unstable
Search In- place sort
*/