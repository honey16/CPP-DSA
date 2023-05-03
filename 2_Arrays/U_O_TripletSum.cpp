/*https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

Array of N integers 
Find all distinct triplets which add up to a givn number K

Return triplet in any order
If no triplet present reurn empty list 

Solution
Run three loops 1. i to n-1 , ,inside i+1 to n-1 and inside i+2 to n-1;

*/
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;


void findTriplets(vector<int>arr, int n, int K) {


	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < arr.size() - 2; i++) {
		int start = i + 1;
		int end = n - 1;
		while (start < end)
		{
			if (arr[i] + arr[start] + arr[end] == K){
				cout << arr[i] << " " << arr[start] << " " << arr[end] << endl;
				return;
			}
			else if (arr[i] + arr[start] + arr[end] < K)
				start++;
			else
				end--;
		}
	}


	cout << -1 << endl;
}


int main(){
	vector<int> nums = { 1, 1, 2, 2, 1, 1 };
	findTriplets(nums, 6, 4);
	return 0;
}
