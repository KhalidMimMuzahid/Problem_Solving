#include<iostream>
#include<vector>
using namespace std;


bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row= matrix.size();
    int col= matrix[0].size();
    int i=0, j=col-1; // we are starting to track the cell from top-right corner, (we can track from bottom-left, but not from top-left or bottom-right)

    while(i<row && j>=0){
        if(matrix[i][j] > target){
            // go left
            j--;
        }
        else if(matrix[i][j] < target){
            // go down
            i++;;
        }
        else{
            // that means matrix[i][j] is the target value;
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 11;
    bool has_found= searchMatrix(matrix, target);
    cout<< target<< " has"<< (has_found? " found": " not found")<< " in this matrix"<< endl;


    return 0;
}