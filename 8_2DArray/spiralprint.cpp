/*
https://leetcode.com/problems/spiral-matrix/
mxn matrix return elements in spiral order from a11

Approach
print starting row
    ending column
    ending row 
    starting column
    iske bad same smaller matrix me
    ie move starting row to next smaller just after printing

Amazon me ata imp (3-4 baar dekh liye)
*/

vector<int> spiralOrder(vector<vector<int>>& matrix){
    
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count < total) {
        // <= or >= as they are indices  ( = )
        //print starting row
        //also check count < total in each for loop
        for ( int index = startingCol; index<=endingCol && count<total ; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending column
        for (int index = startingRow; index<=endingRow && count<total; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //printing endingRow
        for (int index = endingCol; index>=startingCol && count<total; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //printing starting column
        for(int index = endingRow; index>=startingRow && count<total; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;


}

//complexity O(mxn)

//Doubt why no duplicate element push back