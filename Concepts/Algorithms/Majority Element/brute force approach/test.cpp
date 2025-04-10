#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= n^2
int majorityElement(vector<int>& nums) {  
    int n= nums.size();
    int minMajorityElement= std::floor(n/2);

    int answer;
    int ansCount=0;


    for(int i=0; i<n;i++){
        int count=0;
        for(int j= i+1; j<n;j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        // if(count>ansCount){
        //     answer= nums[i];
        //     ansCount= count;
        // }
        if(count>minMajorityElement ){ // && count>ansCount
            answer= nums[i];
            ansCount= count;
        }

        
    }
    return answer;
}

int main(){
    vector<int> vec= {2,2,1,1,1,2,2};
    int ans= majorityElement(vec);
    cout<<ans<< endl;
    return 0;
}
 