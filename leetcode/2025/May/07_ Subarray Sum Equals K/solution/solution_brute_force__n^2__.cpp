#include<iostream>
#include<vector>
using namespace std;



// TC= O(n^2)
// SC= O(1)
int subarraySum(vector<int>& nums, int k) {
    int count=0;
    int n= nums.size();
    for(int i=0; i <n; i++){ // TC= O(n)
        int sum=0;
        for(int j=i; j<n; j++){ // TC= O(n)
            sum+=nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}


int main(){
    vector<int> nums = {1,1,1};
    int k=2;
    int ans = subarraySum(nums, k);
    cout<<ans<<endl;
    return 0;
}