#include<iostream>
#include<vector>
#include<map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> m;
    vector<int> ans;
    for(int i=0; i<nums.size();i++){
        int value= nums[i];
        int different= target-value;
        if(m[different] ){
            ans= {m[different]-1, i};
            break;
        }
        else{
            m[value]=i+1;
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