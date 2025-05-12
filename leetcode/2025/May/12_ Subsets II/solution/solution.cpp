#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Custom hash for vector<int>
struct VectorHash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = 0;
        for (int num : v) {
            hash ^= hash * 31 + std::hash<int>()(num);
        }
        return hash;
    }
};




void make_subset(vector<int>& nums, unordered_set<vector<int>, VectorHash>& sub_sets, vector<int>& ans, int i){
    if(i == nums.size()){
        vector<int> ans_temp = ans;  // Create a copy of ans
        sort(ans_temp.begin(), ans_temp.end());  // Sort the copy
        sub_sets.insert(ans_temp);
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
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    unordered_set<vector<int>, VectorHash> sub_sets;
    vector<int> ans;
    make_subset(nums, sub_sets, ans, 0);
    // Copy into vector<vector<int>>

    vector<vector<int>> result(sub_sets.begin(), sub_sets.end());
    return result;
}



int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> sub_sets= subsetsWithDup(nums);

    return 0;
}