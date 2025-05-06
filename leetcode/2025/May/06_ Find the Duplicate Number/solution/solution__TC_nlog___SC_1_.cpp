#include<iostream>
#include<vector>
#include<map>
using namespace std;

 // TC= O(nlogn)
int findDuplicate(vector<int>& nums) {
    int n= nums.size();
    int duplicated_number;
    sort(nums.begin(), nums.end()); // TC= O(nlogn)
    for(int i = 1; i<n; i++){ // TC= O(n)
        if(nums[i]== nums[i-1]){
            duplicated_number= nums[i];
            break;
        }
    }
    return duplicated_number;
}


int main(){
    vector<int> nums = {1,3,4,2,2};
    int ans= findDuplicate(nums);
    cout<<"duplicated value is "<< ans<< endl;

    return 0;
}