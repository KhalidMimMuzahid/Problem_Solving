#include <iostream>
using namespace std;

/*
      |col-1|col-2|col-3|
row-1 |  1  |  2  |  3  |
row-2 |  3  |  4  |  5  |
row-3 |  5  |  6  |  7  |
row-4 |  7  |  8  |  9  |
*/

int get_maximum_row_sum1(int* ptr, int row, int col){
    int max_row_sum= INT_MIN;
    for(int i =0; i<row; i++){
        int temp=0;
        for(int j=0; j<col; j++){
            temp= temp+ *(ptr+ ((i*col)+j));
        }
        max_row_sum= max(max_row_sum, temp);
    }
    return max_row_sum;
}


int get_maximum_row_sum2(int matrix[][3], int row, int col){
    int max_row_sum= INT_MIN;
    for(int i =0; i<row; i++){
        int temp=0;
        for(int j=0; j<col; j++){
            temp= temp+ matrix[i][j];
        }
        max_row_sum= max(max_row_sum, temp);
    }
    return max_row_sum;
}


int get_maximum_col_sum1(int* ptr, int row, int col){
    int max_col_sum= INT_MIN;
    for(int j =0; j<col; j++){
        int temp=0;
        for(int i=0; i<row; i++){
            temp= temp+ *(ptr+ ((i*col)+j));
        }
        max_col_sum= max(max_col_sum, temp);
    }
    return max_col_sum;
}


int get_maximum_col_sum2(int matrix[][3], int row, int col){
    int max_col_sum= INT_MIN;
    for(int j =0; j<col; j++){
        int temp=0;
        for(int i=0; i<row; i++){
            temp= temp+ matrix[i][j];
        }
        max_col_sum= max(max_col_sum, temp);
    }
    return max_col_sum;

}


int main(){
    const int row=4, col=3;
    int matrix[row][col]= {{1,2,3}, {3,4,5}, {5,6,7}, {7,8,9}};
    
    int* ptr = &matrix[0][0];

    int max_row_sum1 = get_maximum_row_sum1(ptr, row, col);
    cout << "Max Row Sum is "<< max_row_sum1<<endl;

    int max_row_sum2 = get_maximum_row_sum2(matrix, row, col);
    cout << "Max Row Sum is "<< max_row_sum2<<endl;


    int max_col_sum1 = get_maximum_col_sum1(ptr, row, col);
    cout << "Max Column Sum is "<< max_col_sum1<<endl;

    int max_col_sum2 = get_maximum_col_sum2(matrix, row, col);
    cout << "Max Column Sum is "<< max_col_sum2<<endl;

    return 0;
}

