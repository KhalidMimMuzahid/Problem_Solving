#include <iostream>
using namespace std;


int main(){
    const int row=4, col=3;
    int matrix[row][col];

    for(int i=0; i<row;i++){
        cout<<endl<< "Row no-"<<i+1;
        for(int j=0; j<col;j++){
            cout<< "\nInput for matrix["<<i<<"]["<<j<<"] = ";
            cin>> matrix[i][j];
        }
        cout << endl;
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cout<<matrix[i][j]<< ", ";
        }
        cout << endl;
    }
    cout<<endl;



    return 0;
}