#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= logn
int singleNonDuplicate(vector<int>& nums){
    int start=0, end=nums.size()-1;
    int ans=0;
    while(start<=end){

        int mid = start+ (end-start)/2;
        if(start == end){
            return nums[start];
        }
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        else if( (mid-start)%2==0){
            // even number in each side
            if(nums[mid] == nums[mid-1]){
                end=mid;
            }
            else{
                start=mid;
            }
        }
        else{
            // odd number in each side
            if(nums[mid]== nums[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return ans;
}

int main(){
    vector<int> nums= {3,3,7,7,10,11,11}; // sorted array
  
    int peakIndex=singleNonDuplicate(nums);
    cout<< peakIndex << endl;

    return 0;
}
 