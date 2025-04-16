#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= logn
int search2(vector<int>& nums, int target){
    int start=0, end= nums.size()-1;

    while(start<=end){
        
        if( end-start ==1){ // if the array size is 2
            if(nums[start] == target){
                return start;
            }
            else if(nums[end] == target){
                return end;
            }
        }

        int mid= start+ (end-start)/2;
        if(nums[mid] == target){
            return mid;
        }

        if(nums[start] < nums[mid]){// left part sorted
            
            if(nums[mid] >= target && nums[start]<= target){
 
                end= mid-1;
            }
            else{
                start= mid+1;
            }
        }
        else{// right part sorted
             
            if(nums[mid] <= target && nums[end] >=target ){

                start= mid+1;
            }
            else{
                end= mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums= {4,5,6,7,0,1,2}; // sorted array
  
    int target= 0; // targeted value
    int targetindex=search2(nums,target);
    cout<< targetindex << endl;

    return 0;
}
 