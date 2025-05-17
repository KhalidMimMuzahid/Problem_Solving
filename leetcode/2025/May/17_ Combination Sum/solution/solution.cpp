#include <iostream>
#include <typeinfo>
#include <vector>
#include <set>
using namespace std;


void helper(vector<int>& arr, vector<int>& combination, vector<vector<int>>& ans, set<vector<int>>& comb_set,  int idx, int target){
    if(target == 0){
        if(comb_set.find(combination) == comb_set.end()){
            ans.push_back(combination);
            comb_set.insert(combination);
        }
        return;
    }
    else if(target<0 || idx == arr.size()){
        return;
    }
    
    // only once include
    combination.push_back(arr[idx]);
    helper(arr, combination, ans, comb_set, idx+1, target-arr[idx]);

    // multiple include
    helper(arr, combination, ans, comb_set, idx, target-arr[idx]);

    combination.pop_back();
    // exclude
    helper(arr, combination, ans, comb_set, idx+1, target);
}



vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> combination;
    set<vector<int>> comb_set;
    helper(arr, combination, ans,comb_set, 0, target);
    return ans;
}


int main(){
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans= combinationSum(candidates, target);
    for(vector<int> combination: ans){
        cout<< "[ " ;
        for(int val: combination){
            cout<<val<<" ";
        }
        cout<< "]"<< endl ;
    }
    cout << endl;
    return 0;
}