#include <iostream>
#include <vector>
using namespace std;

// TC = O(1)
// SC = O(1)
pair<int, int> next_move(vector<vector<int>>& grid, int row, int col, int count, int n){
    // top 2-step, left 1-step
    if(((row-2)>=0 && (col-1)>=0) && grid[row-2][col-1] == count+1){
        return {row-2, col-1};
    }
    // top 2-step, right 1-step
    if(((row-2)>=0 && (col+1)<n) && grid[row-2][col+1] == count+1){
        return {row-2, col+1};
    }
    // down 2-step, left 1-step
    if(((row+2)<n && (col-1)>=0) && grid[row+2][col-1] == count+1){
        return {row+2, col-1};
    }
    // down 2-step, right 1-step
    if(((row+2)<n && (col+1)<n) && grid[row+2][col+1] == count+1){
        return {row+2, col+1};
    }
    // left 2-step, top 1-step
    if(((col-2)>=0 && (row-1)>=0) && grid[row-1][col-2] == count+1){
        return {row-1, col-2};
    }
    // left 2-step, down 1-step
    if(((col-2)>=0 && (row+1)<n) && grid[row+1][col-2] == count+1){
        return {row+1,col-2};
    }
    // right 2-step, top 1-step
    if(((col+2)<n && (row-1)>=0) && grid[row-1][col+2] == count+1){
        return {row-1, col+2};
    }
    // right 2-step, down 1-step
    if(((col+2)<n && (row+1)<n) && grid[row+1][col+2] == count+1){
        return {row+1,col+2};
    }
    return {-1,-1};
}

// TC = O(n^2)
// SC = O(n^2)
bool visitCell(vector<vector<int>>& grid, int row, int col, int count, int n){
    if(grid[row][col] == (n*n-1)){
        return true;
    }
    pair<int, int> row_col = next_move(grid, row, col, count, n); 
    if(row_col.first != -1){
        return visitCell(grid, row_col.first, row_col.second, count+1 ,n);
    }
    else{
        return false;
    }
}


// TC = O(n^2)
// SC = O(n^2)
bool checkValidGrid(vector<vector<int>>& grid) {
    if(grid[0][0] != 0)return false;
    vector<int> row = grid[0];
    int n= row.size();
    return visitCell(grid, 0, 0, 0, n);
}


int main(){
    vector<vector<int>> grid = {{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}};
    bool ans= checkValidGrid(grid);
    cout << "answer: "<< ans << endl;
    return 0;
}