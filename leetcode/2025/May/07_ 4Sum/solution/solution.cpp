#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;




//TC = O(n^3) 
//SC= O(k) // k= unique quadruplets
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());  // TC = O(nlogn)

    for(int i=0; i<n; i++){ // TC = O(n)             
        if(i>0 && nums[i]== nums[i-1])continue;
        for(int j= i+1; j<n; j++){ // TC = O(n)       
            if(j>i+1 && nums[j]== nums[j-1])continue;
            int k= j+1, h= n-1; // k= start pointer, h= end pointer
            while(k < h){ // TC = O(n)
                // long long   sum = nums[i] + nums[j]+ nums[k] + nums[h]; // this line will throw an error because of integer overflow. 
                // Although We are assigning the result to a long long, the addition itself is performed in int before being cast to long long. So if any intermediate sum exceeds INT_MAX (2,147,483,647), you get undefined behavior.
                // long long   sum = 1LL * nums[i] + nums[j]+ nums[k] + nums[h]; // OK or,
                long long   sum = (long long )nums[i] + nums[j]+ nums[k] + nums[h];
                if( (k > j+1 && nums[k] == nums[k-1]) || sum < target) k++; // we are skipping this cause already we count the triplet for previously element nums[j-1], so now we are skipping nums[j] cause nums[j] = nums[j-1] 
                else if( sum > target)h--; // we no need to skip nums[k] though nums[k] =nums[k+1], cause we have already change the value of j where it is not same as previous one, thats why we no need to add this condition, (k <nums.size()-1 && nums[k] == nums[k+1]).  But i we add this it will also work
                else{
                    ans.push_back({nums[i], nums[j], nums[k], nums[h]});
                    k++; h--;
                }
            }
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {1000000000,1000000000,1000000000,1000000000};
    int target = 0;

    vector<vector<int> > ans= fourSum(nums, target);
    if (!ans.empty()) {
        int row = ans.size();
        int col = ans[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << ans[i][j] << ", ";
            }
            cout << endl;
        }
    } else {
        cout << "No quadruplets found." << endl;
    }

    return 0;
}

