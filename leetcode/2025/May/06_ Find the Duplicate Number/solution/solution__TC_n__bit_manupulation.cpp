#include<iostream>
#include<vector>
#include<map>
using namespace std;

// TC= O(n)
int findDuplicate(vector<int>& nums) {
    int n = nums.size() - 1;
    int duplicate = 0;

    for (int bit = 0; bit < 32; bit++) {
        int bitCountNums = 0;
        int bitCountRange = 0;
        int mask = 1 << bit;

        for (int num : nums) {
            if (num & mask) bitCountNums++;
        }

        for (int i = 1; i <= n; i++) {
            if (i & mask) bitCountRange++;
        }

        if (bitCountNums > bitCountRange) {
            duplicate |= mask;
        }
    }

    return duplicate;
    }

    int main(){
        vector<int> nums = {1,3,4,2,2};
        int ans= findDuplicate(nums);
        cout<<"duplicated value is "<< ans<< endl;
    
        return 0;
    }