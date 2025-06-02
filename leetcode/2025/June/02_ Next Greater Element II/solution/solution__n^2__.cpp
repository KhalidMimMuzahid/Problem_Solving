#include <iostream>
#include  <vector> 
using namespace std;

// TC= O(n^2)
// SC= O(1)// excluding ans variable
vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,0);
    // TC= O(n)
    for(int i=0; i<n; i++){
        int j= i==n-1? 0:i+1;
        // TC= O(n)
        while(j!=i && nums[j]<=nums[i]){
            j= j==n-1? 0:j+1;
        }
        ans[i]= j==i? -1: nums[j];
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
 