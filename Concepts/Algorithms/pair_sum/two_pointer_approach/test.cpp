#include <iostream>
#include  <vector> 
using namespace std;


// Time Complexity: O(n)= n
vector<int> pairSum(vector<int>& nums, int target) {  
    int start=0, end= nums.size()-1;
    vector<int> pair;
    int pairSum = nums[start]+ nums[end];
    while(start<end){
        if(pairSum > target){
            end--;
        }
        else if(pairSum < target){
            start++;
        }
        else {
            // pair.push_back(start);
            // pair.push_back(end);
            pair= {start, end};
            return pair;
        }
    }
    return pair;
}

int main(){
    vector<int> vec= {2,7,11,15};
    int target=22;
    vector<int> pair= pairSum(vec, target);
    cout<<pair[0] <<", "<<pair[1]<< endl;
    return 0;
}
 