#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> ans){
    cout<<"[";
    for(int i = 0; i<ans.size(); i++){
        if(i == ans.size()-1){
            cout << ans[i] << "";
        }
        else{
            cout << ans[i] << ",";
        }
        
    }
    cout <<"]"<< endl;
}



void permutation(vector<int>& nums,  int i, vector<vector<int>>& ans){
    if(i== nums.size()){
        ans.push_back(nums);
        // printVector(nums);
        return;
    }
    int remain_idx= i;

    while(remain_idx<nums.size()){
        swap(nums[i], nums[remain_idx]);
        permutation(nums, i+1, ans);
        swap(nums[i], nums[remain_idx]);
        remain_idx++;
    }
}


int main(){
    vector<int> nums= {1,2,3};
    vector<vector<int>> ans;
    permutation(nums, 0, ans);
    for(vector<int> nums : ans){
        printVector(nums);
    }
    return 0;
}