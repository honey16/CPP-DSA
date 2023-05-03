/*
Algo in PC

Assume first element sorted
4 12 11 20
j i
12>4 right side  break

4 12 11 20
j    i 
11<12  shift 12 
4 12 12 20   temp = 11
11>4  break
arr[j+1] = temp 
arr[0+1] + arr[1] = 11

4 11 12 20
      j  i
20> 12 break
arr[i+1]=temp
arr[2+1] = arr[3]=20

Adaptable 
Stable (research both)

Space Complexity : O(1)
Time Compexity : 
Best Case O(n)    as n-1 comparision
Worst Case O(n^2)
*/


#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

}
void insertionSort(int arr[], int n){

    for (int i = 1; i<n; i++){
        
        int temp = arr[i];
        int j = i-1;
        for (j; j>=0; j--){
            if (arr[j] > temp){
                //shift to rigght by assigning same value as j 
                arr[j+1] = arr[j];
            }
            else{
                //wait
                break;
            }

        }
        arr[j+1] = temp;
        //temp taken out for further comparison
        //if temp again less shift again else break
    }
    printArray(arr, 7);
}


int main(){

    int arr[7] = {45,6,2,333,42,4,77};
    insertionSort(arr, 7);
}