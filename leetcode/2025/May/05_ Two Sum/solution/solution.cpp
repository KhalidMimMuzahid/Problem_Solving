#include<iostream>
#include<vector>
#include<map>
using namespace std;


//TC = O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0; i<nums.size();i++){ //TC = O(n)
        int value= nums[i];
        int different= target-value;
        if(m.find(different) != m.end() ){
            ans= {m[different], i};
            break;
        }
        else{
            m[value]=i;
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target= 9;

    vector<int> ans= twoSum(nums, target);
    cout<<"["<< ans[0]<<", "<< ans[1]<<"]"<<endl;

    return 0;
}