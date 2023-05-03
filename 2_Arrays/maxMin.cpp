#include <iostream> 
#include <limits.h>   // important to use INT_MAX and INT_MIN
using namespace std;

int getMax(int num[], int n){

    int max = INT_MIN;

    for (int i=0; i<n; i++){
        if (num[i]>max){
            max = num[i];
        }
    }
    
    return max;
}

int getMin(int num[], int n){

    int min = INT_MAX;

    for (int i=0; i<n; i++){
        if (num[i]<min){
            min = num[i];
        }
    }
    
    return min;
}

int main(){

    int size;
    cin >> size;
    //bad practice to give variable in size parameter
    //int num[size];
    
    int num[100];
    //Taking input in array
    for (int i=0; i<size; i++) {
        cin >> num[i];
    }

    cout << "Max value" << getMax(num, size) << endl;
    cout << "Min value" << getMin(num,size) << endl;
}


/*
Using Pre defined fn

int M = INT_MIN
for(...)
M = max(M,num[i])

int m = INT_MAX
for (...)
m = min(m,int[i])

*/