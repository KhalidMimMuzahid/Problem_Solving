#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= n
int maxSubArraySum(vector<int>& nums) {
    int start=0, n= nums.size();
    int maxSum = INT_MIN; 
    int curSum= 0;

    for(int i=start; i<n;i++){
        curSum+= nums[i];
        maxSum = max(curSum, maxSum);
        if(curSum < 0){
            curSum=0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> vec= {3,-4,5,4,-1,7,-8};
    int maxValue= maxSubArraySum(vec);
    cout<< maxValue<<endl;
    return 0;
}
 