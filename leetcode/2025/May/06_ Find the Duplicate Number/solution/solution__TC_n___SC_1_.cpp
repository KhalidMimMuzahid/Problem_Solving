#include<iostream>
#include<vector>
#include<map>
using namespace std;

// TC= O(n)
int findDuplicate(vector<int>& nums) {
    int duplicated_number;
    int slow= nums[0], fast=nums[0];
    do{ // TC= O(n)
        slow= nums[slow];
        fast = nums[nums[fast]];
    }while (slow != fast);

    slow= nums[0];
    while(slow != fast){ // TC= O(n)
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;// here slow = fast
}


int main(){
    vector<int> nums = {1,3,4,2,2};
    int ans= findDuplicate(nums);
    cout<<"duplicated value is "<< ans<< endl;

    return 0;
}