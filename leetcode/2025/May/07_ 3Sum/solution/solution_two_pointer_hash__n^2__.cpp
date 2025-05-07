#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


struct SortedVectorHash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = 0;
        for (int x : v) {
            hash = hash * 31 + std::hash<int>()(x);
        }
        return hash;
    }
};


//TC = O(n^2) 
//SC= O(k) // k= unique triplets (at most O(n^2))
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    unordered_set<vector<int>, SortedVectorHash> us;
    sort(nums.begin(), nums.end());  // TC = O(nlogn)

    for(int i=0; i<nums.size(); i++){ // TC = O(n)
        int two_sum= -nums[i];
        int start= 0, end= nums.size()-1;
        while(start < end){ // TC = O(n)
            int sum = nums[start]+ nums[end];
            if(start == i || sum < two_sum){
                start++;
            }
            else if(end ==i || sum > two_sum){
                end--;
            }
            else{
                vector<int> trip= {nums[i], nums[start], nums[end]};
                sort(trip.begin(), trip.end()); // O(1), cause trip has constant element // 3 element
                us.insert(trip); // TC = O(1) with a good hash
                start++; end--;
            }
        }
    }
    ans.assign(us.begin(), us.end());
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