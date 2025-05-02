#include <iostream>
using namespace std;

/*
      |col-1|col-2|col-3|
row-1 |  1  |  2  |  3  |
row-2 |  3  |  4  |  5  |
row-3 |  5  |  6  |  7  |
row-4 |  7  |  8  |  9  |
*/



int main(){
    const int row=4, col=3;
    int matrix[row][col]= {{1,2,3}, {3,4,5}, {5,6,7}, {7,8,9}};

    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cout<<matrix[i][j]<< ", ";
        }
        cout << endl;
    }
    cout<<endl;
    int* ptr= &matrix[0][0];
    for(int i =0; i<row*col; i++){
        cout<<*(ptr+i)<< ", ";
    }
    cout<< endl;

    cout<< endl;
    for(auto row: matrix ){
        // cout<< row<<", "<< endl; // memory address of every row first element
        for(int i=0; i <col; i++){
            cout<< *(row+i)<<", ";
        }
        cout<< endl;
    }
    cout<< endl;


    return 0;
}