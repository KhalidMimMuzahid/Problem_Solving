#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



// TC = O(n)
// SC = O(n) 
int subarraySum(vector<int>& nums, int k) {
    int count=0;
    int n= nums.size();
    unordered_map<int,int> m;
    vector<int> prefix_nums;
    int prefix_sum=0;
    for(int i = 0; i<n; i++){ // TC = O(n)
        if(i==0){
            prefix_sum=nums[i];
        }
        else{
            prefix_sum +=  nums[i];
        }
        prefix_nums.push_back(prefix_sum);
    }

    for(int j=0; j<n; j++){ // TC = O(n)
        if(prefix_nums[j] == k) count++;
        // subArraySum[i,j] = k = ps[j]-ps[i-1]
        // ps[i-1]=  ps[j]- k;
        int val =  prefix_nums[j]-k;
        if(m.find(val) != m.end()){
            count+= m[val];
        }
        if(m.find(prefix_nums[j]) == m.end()){
            m[prefix_nums[j]] =0;
        }
        m[prefix_nums[j]]++;
    }
    return count;
}


int main(){
    vector<int> nums = {1,1,1};
    int k=2;
    int ans = subarraySum(nums, k);
    // cout<<ans<<endl;
    return 0;
}