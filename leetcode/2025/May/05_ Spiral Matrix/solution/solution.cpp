#include<iostream>
#include<vector>
using namespace std;


// TC = O(m+n)
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans={};
    int start_row= 0;
    int start_col= 0;
    int end_row= matrix.size()-1;
    int end_col= matrix[0].size()-1;
    while(start_row<=end_row && start_col<=end_col){
        //for the start row (to-right)
        for(int i=start_col; i<= end_col; i++){
            ans.push_back(matrix[start_row][i]);
        }
        // for the end column (to-down)
        for(int i= start_row+1; i<end_row; i++){
            ans.push_back(matrix[i][end_col]);
        }
        // for the end row (to-left)
        for(int i=end_col; i>=start_col &&  start_row!=end_row; i--){
            ans.push_back(matrix[end_row][i]);
        }
        // for the start row (to-up)
        for(int i=end_row-1; i>start_row && start_col!=end_col; i--){
            ans.push_back(matrix[i][start_col]);
        }
        start_col++; end_col--; start_row++; end_row--;
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix ={{1,2,3},{4,5,6},{7,8,9}};


    vector<int> ans= spiralOrder(matrix);
    for(int i= 0; i<ans.size();i++){
        cout << ans[i]<<", ";
    }
    cout<< endl;

    return 0;
}