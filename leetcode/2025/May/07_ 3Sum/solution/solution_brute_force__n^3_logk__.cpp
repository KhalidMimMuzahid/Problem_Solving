#include<iostream>
#include<vector>
#include<set>
using namespace std;


//TC = O(logk n^3)  // k= unique triplets
//SC= O(k) // k= unique triplets
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;

    set<vector<int>> s;
    for(int i=0; i<nums.size(); i++){ // TC = O(n)
        for(int j=i+1; j<nums.size()-2; j++){ // TC = O(n)
            for(int k=j+1; k<nums.size()-1;k++){ // TC = O(n)
                if(nums[i]+nums[j]+nums[k] == 0){
                    vector<int> trip= {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    if(s.find(trip) == s.end()){ // TC = O( log(all unique triplets) ) for this finding triplets in a set
                        ans.push_back(trip);
                        s.insert(trip); // TC = O(log(unique triplets))
                    }
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