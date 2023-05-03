/*
https://www.interviewbit.com/problems/rotated-array/
Given an sorted and rotated array find pivot in lon n time
eg   [1,2,3,7,9]
rotated [7,9,1,2,3]

rotation
clockwise or anticlockwise shifting of elements from a fixed element
generally unknow to you

do rotated question by graph (upper and lower line) and s<e

pivot point is the point where the array has been rotated
pivot (minimum value )??

Solution (make graph to understand)
if arr[mid]>=arr[0]    mid first line
    s=mid+1
else
    e=mid    as mid can be atlast index of last line so -1 will shift it to upper line

*/


#include <iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if (arr[mid] >= arr[0]){
            s = mid+1;
        }
        else {
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;  //can return both s and e and s<e only
}

int main(){

    int arr[5] = {8,10,17,1,3};
    cout << "pivot is" << getPivot(arr, 5) << endl;
}

/*
Dry run for other examples
[3,8,10,17,1]
*/