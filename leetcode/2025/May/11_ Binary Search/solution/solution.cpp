#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>& nums, int start, int end, int target){
    if(start > end) return -1;
    int mid= start+ (end-start)/2;
    if(nums[mid]> target) return binary_search(nums, start, end=mid-1, target);
    else if(nums[mid]< target) return binary_search(nums, start= mid+1, end, target);
    else return mid;
}

int search(vector<int>& nums, int target){
    int start=0, end= nums.size()-1;
    return binary_search(nums, start, end, target);
}



int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target =9;
    int found_index =search(nums, target);
    cout << target<< " found at " <<found_index<< endl;

    return 0;
}