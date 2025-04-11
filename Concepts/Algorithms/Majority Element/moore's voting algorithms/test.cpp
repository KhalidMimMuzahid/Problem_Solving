#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= n 
int majorityElement(vector<int>& nums) {  
    int n= nums.size();
    int answer;
    int ansCount=0;

    for(int val: nums){
        if(ansCount ==0){
            answer= val;   
       }
        if(val== answer){
            ansCount++;
        }
        else{
            ansCount--;
        }


    }

    // this is for, if there is no majority element then return -1
    int count=0;
    for(int val: nums){
        if(val  == answer){
            count++;
        }
    }
    if(count > n/2){
        return answer;
    }
    else{
        return -1;
    } 
}

int main(){
    vector<int> vec= {2,2,1,1,1,2,2};
    int ans= majorityElement(vec);
    cout<<ans<< endl;
    return 0;
}
 