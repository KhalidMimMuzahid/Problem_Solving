#include <iostream>
using namespace std;

void make_subset(vector<int>& nums,vector<vector<int>>& sub_sets, vector<int>& ans, int i){
    if(i == nums.size()){
        sub_sets.push_back(ans);
        return;
    }
    //including value ofo index i
    ans.push_back(nums[i]);
    make_subset(nums, sub_sets, ans, i+1);

    ans.pop_back();// we are removing last element that has added for including 
    //excluding value ofo index i
    make_subset(nums, sub_sets, ans, i+1);
}

// TC = O(2^n * n)
// SC = O(2^n * n)

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> sub_sets;
    vector<int> ans;
    make_subset(nums, sub_sets, ans, 0);
    return sub_sets;
}



int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> sub_sets= subsets(nums);

    return 0;
}