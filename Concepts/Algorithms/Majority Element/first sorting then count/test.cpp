#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= nlog(n)
int majorityElement(vector<int>& nums) {  
    int n= nums.size();
    int minMajorityElement= std::floor(n/2);

    std::sort(nums.begin(), nums.end());

    // int answer=nums[0];
    // int ansCount=1;

    // for(int i=1; i<n; i++){
    //     if(nums[i] == nums[i-1]){
    //         ansCount++;
    //     }
    //     else{
    //         answer=nums[i];
    //         ansCount=1;
    //     }

    //     if(ansCount> n/2){
    //         return answer;
    //     }
    // }

    int answer=nums[0];
    int ansCount=0;

    for(int val: nums){
        if(val == answer){
            ansCount++;
            if(ansCount> minMajorityElement){
                return answer;
            }
        }
        else{
            answer= val;
            ansCount=1;
        }
    }

    return answer;
}

int main(){
    vector<int> vec= {-1,1,1,1,2,1};
    // {2,2,1,1,1,2,2};
    int ans= majorityElement(vec);
    cout<<ans<< endl;
    return 0;
}
 