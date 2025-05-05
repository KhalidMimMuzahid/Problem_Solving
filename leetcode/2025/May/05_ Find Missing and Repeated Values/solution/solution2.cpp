#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


//TC = O(m*n)
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int duplicated_value;
    int missing_value;
    int m = grid.size(); // number of row
    int n = grid[0].size(); // number of col
    int total_cell= m*n;
    int actual_sum= 0;
    int expected_sum;
    unordered_set<int> s;
    for(int row=0; row<m; row++){ // TC= O(m*n)
        for(int col=0; col<n; col++){
            int cell_value= grid[row][col];
            if(s.find(cell_value) != s.end()){
                duplicated_value= cell_value;
            }
            s.insert(cell_value);
            actual_sum+=cell_value;
        }
    }

    // according to the question, if there have not any duplicated value or missing value, then there have total m*n element from 1 to m*n. and each element appears only once.
    expected_sum= (total_cell*(total_cell+1))/2;
    missing_value = expected_sum- (actual_sum-duplicated_value);
    return {duplicated_value, missing_value};
}


int main(){
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans= findMissingAndRepeatedValues(grid);
    cout<<"["<< ans[0]<<", "<< ans[1]<<"]"<<endl;
    return 0;
}