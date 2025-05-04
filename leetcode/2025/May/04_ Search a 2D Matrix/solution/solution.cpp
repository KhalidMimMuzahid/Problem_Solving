#include<iostream>
#include<vector>
using namespace std;

// TC= O( logm + logn )= O(log(m*n)) // m= row, n=col
//
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    // here we are setting start and end value to track the row
    int start = 0, end= row-1;
    while(start <= end){ // TC= O(logm) ; m= row
        int mid_row = start+ (end-start)/2;
        int col = matrix[mid_row].size();
        if(matrix[mid_row][0] > target){
            // go to left
            end= mid_row-1;
        }
        else if(matrix[mid_row][col-1] < target){
            // go to right
            start= mid_row+1;
        }
        else{
            // target may have in this row, cause above 2 if statement is false that means, (matrix[mid_row][0] <= target && matrix[mid_row][col-1] >= target) is true
            // here we are setting start and end value to track the col in a single row "mid_row"
            // this block will be execute only once, not more than that
            start= 0;
            end= col-1;
            while(start<=end){ // TC= O(logn), n=col 
                int mid_col = start+ (end-start)/2;
                if(matrix[mid_row][mid_col] > target){
                    // go to left
                    end= mid_col-1;
                }
                else if(matrix[mid_row][mid_col] < target){
                    // go to right
                    start= mid_col+1;
                }
                else{
                    return true; // target value is matrix[mid_row][mid_col] here
                }
            }
        }
    }
    return false;       
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    bool has_found= searchMatrix(matrix, target);
    cout<< target<< " has"<< (has_found? " found": " not found")<< "in this matrix"<< endl;


    return 0;
}