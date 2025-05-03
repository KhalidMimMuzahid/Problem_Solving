#include <iostream>
#include <vector>
using namespace std;

/*
      |col-1|col-2|col-3|
row-1 |  1  |  2  |  3  |
row-2 |  3  |  4  |  5  |
row-3 |  5  |  6  |  7  |
row-4 |  7  |  8  |  9  |
*/

int main(){
    vector<vector<int>> matrix= {{1,2,3}, {3,4,5}, {5,6,7}, {7,8,9}};
    cout<<matrix[0][0]<< ", ";
    cout<<matrix[0][1]<< ", ";
    cout<<matrix[0][2]<< ", ";
    cout<<endl;
    cout<<matrix[1][0]<< ", ";
    cout<<matrix[1][1]<< ", ";
    cout<<matrix[1][2]<< ", ";
    cout<<endl;
    cout<<matrix[2][0]<< ", ";
    cout<<matrix[2][1]<< ", ";
    cout<<matrix[2][2]<< ", ";
    cout<<endl;
    cout<<matrix[3][0]<< ", ";
    cout<<matrix[3][1]<< ", ";
    cout<<matrix[3][2]<< ", ";
    cout<<endl;
    return 0;
}