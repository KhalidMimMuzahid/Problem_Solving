#include<iostream>
#include<vector>
#include<set>
using namespace std;


//TC = O(n^2 * log k)  // k= unique triplets
//SC= O(k) // k= unique triplets
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    set<vector<int>> s;
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
                if(s.find(trip) == s.end()){ // TC = O( log(all unique triplets) ) for this finding triplets in a set
                    ans.push_back(trip);
                    s.insert(trip); // TC = O(log(unique triplets))
                }
                start++; end--;
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