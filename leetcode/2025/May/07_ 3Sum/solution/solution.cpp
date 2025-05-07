#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;




//TC = O(n^2) 
//SC= O(k) // k= unique triplets
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());  // TC = O(nlogn)
    for(int i=0; i<nums.size(); i++){ // TC = O(n)             
        if(i>0 && nums[i]== nums[i-1])continue;
        int j= i+1, k= nums.size()-1; // i= start pointer, j= end pointer
        while(j < k){ // TC = O(n)
            int sum = nums[i] + nums[j]+ nums[k];
            if( (j > i+1 && nums[j] == nums[j-1]) || sum < 0) j++; // we are skipping this cause already we count the triplet for previously element nums[j-1], so now we are skipping nums[j] cause nums[j] = nums[j-1] 
            else if( sum > 0)k--; // we no need to skip nums[k] though nums[k] =nums[k+1], cause we have already change the value of j where it is not same as previous one, thats why we no need to add this condition, (k <nums.size()-1 && nums[k] == nums[k+1]).  But i we add this it will also work
            else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++; k--;
            }
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};

    vector<vector<int> > ans= threeSum(nums);
    int row= ans.size();
    int col = ans[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<ans[i][j]<<", ";
        }
        cout<<endl;
    }

    return 0;
}