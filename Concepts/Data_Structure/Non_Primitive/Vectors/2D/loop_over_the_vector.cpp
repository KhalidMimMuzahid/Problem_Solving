#include <iostream>
using namespace std;

/*
      |col-0|col-1|col-2|col-3|col-4|col-5|col-6|
row-0 |  1  |  2  |  3  |
row-1 |  3  |  4  |  5  |  6  |  7  |  8  |
row-2 |  5  |  6  |  7  |
row-3 |  7  |  8  |  9  |
*/



int main(){
    vector<vector<int>> matrix= {{1,2,3}, {3,4,5,6,7,8}, {5,6,7}, {7,8,9}};
    int row=matrix.size();

    for(int i=0; i<row;i++){
        int col=matrix[i].size();
        for(int j=0; j<col;j++){
            cout<<matrix[i][j]<< ", ";
        }
        cout << endl;
    }
    cout<<endl;

    return 0;
}