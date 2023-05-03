/*
Initialization
int arr[i][j];

Input
cin >> arr[i][j];

Output
cout << arr[i][j];

Relation

c*i + j 
where c total number of rows
i row index
j column index
*/

#include <iostream>
#include <limits.h>
using namespace std;
//Note : we need to specify the column size when passing a 2D array as a parameter
bool isPresent(int arr[][4], int target, int row, int col){

    for(int row=0; row<3; row++){
        for (int col=0; col<4; col++){
            if(arr[row][col]== target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col){
    //row wise sum
    for(int row=0; row<3; row++){
        int sum = 0;
        for (int col=0; col<4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    //for column sum first for loop column nested row
}

int largestRowSum(int arr[][4], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;
        for (int col=0; col<4; col++){
            sum += arr[row][col];
        }
        
        if (sum>maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
    
}

int main(){

    int arr[3][4];


    //take input row wise
    for(int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    //To take input column wise
    /*
    for (int col = 0; col <4; col++){
        for(int row = 0; row<3; row++){
            cin >> arr[row][col]
        }
    }
    
    */

    //print 
    for(int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //if added in single row elements are added row wise
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //output  1  2  3  4 
    //        5  6  7  8
    //        9 10 11  12

    //to add as per user
    //int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    //Searching
/*
    cout << "Enter element to search" << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Not Found";
    }

    printSum(arr, 3, 4);
    */

    int ansIndex = largestRowSum(arr,3,4);
    cout << "Max row is at index" << ansIndex << endl;
}