#include <iostream>
#include  <vector> 
using namespace std;


void printArray(vector<int> &arr, int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



// Time Complexity: O(n)= (n)


vector<int> productExceptSelf(vector<int>& nums) {
    int n= nums.size();
    vector<int> answer(nums.size(), 1);
    // left to right 
    for(int i=0; i<n; i++ ){
        if(i==0){
            answer[i] = nums[i];
        }
        else{
            answer[i]= nums[i]* answer[i-1];
        }
       
    }
    // printArray(answer, answer.size());
    // right to left 
    for(int i=n-2; i>=0; i-- ){
        nums[i]= nums[i]* nums[i+1];
    }
    // printArray(nums, nums.size());
    for(int i=n-1; i>=0; i--){
        if(i==0){
            answer[i]= nums[i+1];
        }
        else if(i == n-1){
            answer[i]= answer[i-1];
        }
        else{
            answer[i]= nums[i+1] * answer[i-1];
        }
        
    }
    return answer;
}

int main(){
    vector<int> nums= {1,2,3,4};
    vector<int> ans=productExceptSelf(nums);
    printArray(ans, ans.size());
    return 0;
}
 