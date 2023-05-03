/*
https://leetcode.com/problems/search-a-2d-matrix-ii/

each row sorted in asc
each col sorted in asc top to bottom

to use binsrch take first row last element
and reduce search space with the three conditions
Understand with notes


*/

bool searchMatrix(vector<vector<int>>& matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while (rowIndex < row && colIndex >= 0) {
        int element = matrix[rowIndex][colIndex];

        if (element == target ){
            return 1;
        }

        if (element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;

}



