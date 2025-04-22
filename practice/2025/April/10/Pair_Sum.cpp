#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= n^2
vector<int> pairSum(vector<int>& nums, int target) {  
    int n= nums.size();
    vector<int> pair;

    for(int i=0; i<n;i++){
        for(int j= i+1; j<n;j++){
            if((nums[i]+ nums[j]) == target){
                pair={nums[i], nums[j]};
                return pair;
            }
            
        }
    }
    return pair;
}

int main(){
    vector<int> vec= {2,7,11,15};
    int target=18;
    vector<int> pair= pairSum(vec, target);
    for(int value: pair){
        cout<< value<< " ";
    }
    cout<< endl;
    return 0;
}
 