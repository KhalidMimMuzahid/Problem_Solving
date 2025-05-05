#include<iostream>
#include<vector>
#include<map>
using namespace std;


//TC = O(m*n)
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int duplicated_value;
    int missing_value;
    int m = grid.size(); // number of row
    int n = grid[0].size(); // number of col
    int total_cell= m*n;
    unordered_map<int, int> mp;
    for (int i = 1; i <= total_cell; i++) { //TC = O(m*n)
        mp[i] = 0;
    }

    for(int row=0; row<m; row++){ // TC= O(m*n)
        for(int col=0; col<n; col++){
            int cell_value= grid[row][col];
            mp[cell_value]++;
        }
    }

    for (int i = 1; i <= total_cell; i++) { //TC = O(m*n)
        if(mp[i]==0) missing_value=i;
        if(mp[i]==2) duplicated_value=i;
    }
    return {duplicated_value, missing_value};
        
}


int main(){
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans= findMissingAndRepeatedValues(grid);
    cout<<"["<< ans[0]<<", "<< ans[1]<<"]"<<endl;
    return 0;
}