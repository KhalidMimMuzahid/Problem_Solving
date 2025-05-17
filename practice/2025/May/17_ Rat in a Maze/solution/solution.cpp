#include <iostream>
#include <vector>
using namespace std;

void helper2(vector<vector<int>>& mat, int row, int col, string path, vector<string>& ans, vector<vector<bool>>& visited_mat){
    int r_len= mat.size();
    int c_len= mat[0].size();
    if(row<0 || col<0 || row>=r_len || col>=c_len || mat[row][col] == 0 || visited_mat[row][col]) return;
    else if(row==(mat.size()-1) && col==(mat[0].size()-1)){
        ans.push_back(path);
        return;
    }

    visited_mat[row][col]= true;

    // Down
    helper2(mat, row+1, col, path+"D", ans, visited_mat);
    // Up
    helper2(mat, row-1, col, path+"U", ans, visited_mat);
    // Right
    helper2(mat, row, col+1, path+"R", ans, visited_mat);
    // Left
    helper2(mat, row, col-1, path+"L", ans, visited_mat);

    visited_mat[row][col]= false;
}

void helper(vector<vector<int>>& mat, int row, int col, string path, vector<string>& ans){
    int r_len= mat.size();
    int c_len= mat[0].size();
    if(row<0 || col<0 || row>=r_len || col>=c_len || mat[row][col] == 0 ) return;
    else if(row==(mat.size()-1) && col==(mat[0].size()-1)){
        ans.push_back(path);
        return;
    }

    mat[row][col]= 0;

    // Down
    helper(mat, row+1, col, path+"D", ans);
    // Up
    helper(mat, row-1, col, path+"U", ans);
    // Right
    helper(mat, row, col+1, path+"R", ans);
    // Left
    helper(mat, row, col-1, path+"L", ans);

    mat[row][col]= 1;
}
vector<string> find_path(vector<vector<int>>& mat){
    vector<string> ans;

    // int r_len= mat.size();
    // int c_len= mat[0].size();
    // vector<vector<bool>> visited_mat(r_len, vector<bool>(c_len, false)); 

    helper(mat, 0, 0, "", ans);
    // helper2(mat, 0, 0, "", ans, visited_mat);
    return ans;
}

int main(){
    vector<vector<int>> mat = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
    vector<string> ans= find_path(mat);
    for(string path: ans){
        cout<< path<< endl;
    }
}