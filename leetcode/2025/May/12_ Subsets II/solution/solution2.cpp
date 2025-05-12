#include <iostream>
#include <vector>
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
    int duplicate_count=1;
    while ((i+duplicate_count)< nums.size() && nums[i] == nums[i+duplicate_count])
    {
        duplicate_count++;
    }
    //excluding value ofo index i
    make_subset(nums, sub_sets, ans, i+duplicate_count);
}

// TC = O(2^n * n)
// SC = O(2^n * n)
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> sub_sets;
    vector<int> ans;
    make_subset(nums, sub_sets, ans, 0);
    return sub_sets;
}




int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> sub_sets= subsetsWithDup(nums);

    return 0;
}