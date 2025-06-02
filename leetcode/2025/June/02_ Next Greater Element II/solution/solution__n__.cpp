#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

// TC= O(n)
// SC= O(n)
vector<int> nextGreaterElements(vector<int>& nums) {
    int n= nums.size();
    vector<int> ans(n,0);
    stack <int> s;
    for(int i=0; i<n; i++){
        nums.push_back(nums[i]);
    }
    // TC= O(n)
    for(int i= nums.size()-1; i>=0; i--){
        while(!s.empty() && nums[i%n]>=nums[s.top()]){
            s.pop();
        }
        ans[i%n]= s.empty()? -1: nums[s.top()];
        s.push(i%n);
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,3};
    vector<int> ans = nextGreaterElements(nums);
    for(int val: ans){
        cout<< val<<" ";
    }
    cout<<endl;
    return 0;
}
 