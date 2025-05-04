#include<iostream>
#include<vector>
using namespace std;



// TC = O(mlogn)
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    for(int i=0; i<row;i++){ // TC= O(m), m=row 
        int col = matrix[i].size();
        if(matrix[i][0] <= target && matrix[i][col-1] >= target){
            // may have chance to the target value
            int start= 0, end= col-1;
            while(start<=end){ // TC= O(logn), n=col 
                int mid_col = start+ (end-start)/2;
                if(matrix[i][mid_col] > target){
                    // go to left
                    end= mid_col-1;
                }
                else if(matrix[i][mid_col] < target){
                    // go to right
                    start= mid_col+1;
                }
                else{
                    return true; // target value is matrix[i][mid_col] here
                }
            }
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