/*
CS:  Code Studio by Coding Ninjas

array of size N. Where N equal to [2M+1]
In array M numbers present twice and one number is present only once
Find and retun that number

Solution 
N=2M+1  thus N is odd
M number -- twice
1 number -- once

eg m=3   n=7
arr =  [2,4,2,7,4,7,9]

We know: XOR operator  a^a =0  0^a =a
thus XOR all elements in array to obtain unique element
2^4^2^7^4^7^9 = 0^9 = 9

*/

#include <iostream>
using namespace std;

int findUnique(int Arr[], int size){
    int ans;
    for (int i; i<size; i++){

        ans=ans^Arr[i];
    }
    return ans;
}

int main(){

    int arr[7]= {2,4,2,7,4,9,7};


}
