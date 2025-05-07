#include<iostream>
#include<vector>
#include<set>
using namespace std;


// TC= O(logk * n^2) // k= unique triplets
// SC= O(n + k) // k= unique triplets
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    set<vector<int>> s;
    unordered_map<int, int> nums_map;
    for(int i=0; i<nums.size(); i++){// TC = O(n)
        nums_map[nums[i]] = i;
    }
    for(int i=0; i<nums.size(); i++){ // TC = O(n)
        for(int j=i+1; j<nums.size(); j++){ // TC = O(n)
            int target = -(nums[i]+nums[j]);
            if(nums_map.find(target) != nums_map.end() && nums_map[target] != i && nums_map[target] != j ){ // TC =O(1) average (since unordered_map is hash-based)
                vector<int> trip= {nums[i], nums[j], target};
                sort(trip.begin(), trip.end());
                if(s.find(trip) == s.end()){ // TC = O( log(all unique triplets) ) for this finding triplets in a set
                    ans.push_back(trip);
                    s.insert(trip); // TC = O(log(unique triplets))
                }
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