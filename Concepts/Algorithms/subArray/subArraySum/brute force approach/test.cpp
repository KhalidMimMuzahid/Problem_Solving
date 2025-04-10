#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= n^2
int maxSubArraySum(vector<int>& nums) {  //or, vector<int> &nums
    int start=0, n= nums.size();
    int maxSum = INT_MIN; 

    for(int i=start; i<n;i++){
        int curSum= 0;
        for(int j= i; j<n;j++){
            curSum+= nums[j];
            maxSum = max(curSum, maxSum);
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
 