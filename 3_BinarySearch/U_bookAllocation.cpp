/*
Book Allocation


Solution
Reduction of Search Space using Binary Search
eg N = 10 20 30 40  M(student)=2

min = 0    max = 100          
take mid if more than m allocation shift to right if possible allocation exists then to find min shift left
no solution : right
solution : left
*/ 

#include <iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid) { // Understand This

    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {

    int arr[4] = {
        12,
        34,
        67,
        90
    };
    int a = allocateBooks(arr, 4, 2);
    cout << a << endl;
}