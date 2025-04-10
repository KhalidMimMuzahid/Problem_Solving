#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= n 
int majorityElement(vector<int>& nums) {  
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

    return answer;
}

int main(){
    vector<int> vec=   {3,2,3};
    // {2,2,1,1,1,2,2};
    int ans= majorityElement(vec);
    cout<<ans<< endl;
    return 0;
}
 