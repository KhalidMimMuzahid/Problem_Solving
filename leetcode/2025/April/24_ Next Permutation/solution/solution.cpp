#include <iostream>
#include  <vector> 
using namespace std;

void printVector(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

// TC => O(n), SC=> O(1)
void nextPermutation(vector<int>& nums) { 

    // // this is STL functions in C++: we cant not use this on coding interview though it can be submitted in leetcode successfully
    // next_permutation(nums.begin(), nums.end());
    // return;

    // Or,



    int n=nums.size();
    int pivot=-1; // or breakpoint( a value or index that helps divide or guide a process in an algorithm.)


    // find is the already descending or not. if not then from right to left which index break the descending order from last of the array

    // step 1
    for(int i = n-1; i>=1; i--){
        if(nums[i] > nums[i-1]){
            pivot= i-1;
            break;
            
        }
    }

    if(pivot != -1){

        // we are try to place the value of nums[pivot] to the  index (pivot+1 to n-1) right side, so that  right side maintain the descending order. Thats why finding the rightMost to place nums[pivot] 

        
        //step 2

        // int rightMost=pivot+1; // // targetIndex to place nums[pivot] value
        // for(int i = pivot+1; i<n; i++){
        //     if(nums[i] > nums[pivot] && nums[i] <=nums[rightMost]){
        //         rightMost=i;
        //     }
        // }

        // OR,

        int rightMost=n-1; // targetIndex to place nums[pivot] value
        for(int i = n-1; i>pivot; i--){
            if(nums[i] > nums[pivot]){
                rightMost=i;
                break;
            }
        }

        // we are placing the value of nums[pivot]
        swap(nums[rightMost], nums[pivot]);



        // step 3
        // now right side is descending order. we just need to make it ascending ()
        // thats why we are just reversing the array
        
        int start=pivot+1, end=n-1 ;
        // reverse(nums.begin()+ start, nums.end() );
        // or,
        while(start<=end){
            swap(nums[start++], nums[end--]);
        }


    }
    else{
        // if descending order then just reverse the array 
        int start=0, end=n-1;
        // reverse(nums.begin(), nums.end() );
        // or, 
        while(start<=end){
            swap(nums[start++], nums[end--]);
        }
    }



}


int main(){
    vector<int> nums = {2,3,1,3,3};

    nextPermutation(nums);
    printVector(nums);

    return 0;
}
  