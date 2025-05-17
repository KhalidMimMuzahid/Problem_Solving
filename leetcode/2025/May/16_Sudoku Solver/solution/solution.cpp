#include <iostream>
#include <typeinfo>
#include <vector>
#include <utility>
using namespace std;

// TC = O(n)
bool is_valid_digit(vector<vector<char>>& board,int row, int col, int board_n,int cell_n, char digit){
    // checking horizontally
    // TC = O(n)
    for(int j=0; j<board_n; j++){
        if(board[row][j] == digit) return false;
    }

    // checking vertically
    // TC = O(n)
    for(int i=0; i<board_n; i++){
        if(board[i][col] == digit) return false;
    }
    
    // check sub-board
    // find row range 
    int row_s= row/cell_n;
    int col_s= col/cell_n;
    // TC = O(n)
    for(int i =0; i<cell_n; i++){
        for(int j=0; j<cell_n; j++){
            if(board[i+(row_s*cell_n)][j+(col_s*cell_n)] == digit) return false;
        }
    }
    return true;
}

// pair<int, int> next_cell(int row, int col, int board_n){
//     return (col == (board_n-1)) ? make_pair(row+1,0) : make_pair(row, col+1);
// }


// SC= O(n^2)
// TC= O(9^E . n) // E= total empty cells
bool fill_num(vector<vector<char>>& board, int row, int col, int board_n, int cell_n){
    if(row == board_n)return true;
    // pair<int, int> next =next_cell(row, col, board_n);
    int next_row= (col==(board_n-1)) ? row+1: row;
    int next_col= (col==(board_n-1)) ? 0: col+1;

    if(board[row][col] != '.'){
        return fill_num(board, next_row, next_col, board_n, cell_n);
    }
    for(char digit= '1'; digit<='9'; digit++){
        if(is_valid_digit(board,row, col, board_n, cell_n, digit)){
            board[row][col] = digit;
            bool is_correct= fill_num(board,  next_row, next_col, board_n, cell_n);
            if(is_correct) return true;
            else {
                board[row][col] = '.';
            }      
        }
    }
    return false;
};

void solveSudoku(vector<vector<char>>& board) {
    int board_n= board[0].size();
    int cell_n= pow(board_n, 0.5);
    fill_num(board, 0,0,board_n,cell_n);
}



int main(){
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};

    solveSudoku(board);
    
    for(vector<char> row: board){
        cout<< "[";
        for(char ch: row){
            cout<<" "<<ch;
        }
        cout<< " ]"<< endl;
    }
    cout << endl;
    return 0;
}