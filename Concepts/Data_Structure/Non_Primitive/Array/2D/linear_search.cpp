#include <iostream>
using namespace std;

/*
      |col-1|col-2|col-3|
row-1 |  1  |  2  |  3  |
row-2 |  3  |  4  |  5  |
row-3 |  5  |  6  |  7  |
row-4 |  7  |  8  |  9  |
*/

pair<int,int> linear_search(int* ptr, int row, int col, int searchItem){
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            if(*(ptr+ ((i*col)+j)) == searchItem){
                return {i,j};
            }
        }
    }

    return {-1,-1};
}


int main(){
    const int row=4, col=3;
    int matrix[row][col]= {{1,2,3}, {3,4,5}, {5,6,7}, {7,8,9}};

    int* ptr = &matrix[0][0];
    pair<int, int> cell  =linear_search(ptr, row, col, 9);
    
    if(cell.first != -1){
        cout<< "found at matrix["<< cell.first<<"]["<< cell.second<<"]"<< endl;
    }
    else{
        cout<< "not found"<< endl;
    }

    return 0;
}