/*
https://leetcode.com/problems/search-a-2d-matrix/

eg  01 03 05 07 
    10 11 16 20
    23 30 34 60

    In ID   [1 3 5 7 10 11 16 20 23 30 34 60]
start = 0
end = row*col -1

mid
case I ar[mid] == target
case II arr[mid] >= target 
        s = mid +1
case III arr[mid] <= target
        e = mid -1

+++To put mid in arr index
For row :  mid/col    In general : index/col (in int)
For col : mid%col   i.e index%col
    
*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col-1;

    int mid = start + (end-start)/2;

    while(start <= end){

        int element = matrix[mid/col][mid%col];

        if (element == target) {
            return 1;
        }
        if (element > target) {
            end = mid -1;
        }
        if (element <= target) {
            start = mid +1;
        }
        int mid = start + (end-start)/2;

    }
    return 0;
}

//why above one tle


class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end  = row*col-1;
        
        int mid = start + (end-start)/2;
        
        while(start<=end) {
            
            int element = matrix[mid/col][mid%col];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target) {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
             mid = start + (end-start)/2;    
        }
        return 0;
    }
};

//Complexity : O(log(rowxcol))
