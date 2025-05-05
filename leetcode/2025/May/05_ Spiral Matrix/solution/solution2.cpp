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
        int init, limit; //initializer and limit


        //for the start row (to-right)
        init= start_col;
        limit=end_col+((end_col==start_col? 1:0));
        for(int idx=init; idx<limit; idx++){
            ans.push_back(matrix[start_row][idx]);
        }


        // for the end column (to-down)
        init= start_row+(end_col==start_col? 1:0);
        limit=end_row+((end_col!=start_col && start_row==end_row? 1:0));
        for(int idx=init; idx<limit; idx++){
            ans.push_back(matrix[idx][end_col]);
        }

        // for the end row (to-left)
        init =end_col;
        limit= start_col;
        for(int idx=init; idx>limit; idx--){
            if(start_row== end_row) break;
            ans.push_back(matrix[end_row][idx]);
        }

        // for the start row (to-up)
        init= end_row;
        limit= (end_col==start_col&& start_row!=end_row? (end_row-1):start_row);
        for(int idx=init; idx>limit; idx--){
            ans.push_back(matrix[idx][start_col]);
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