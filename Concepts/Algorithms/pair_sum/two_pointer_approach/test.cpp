#include <iostream>
#include  <vector> 
using namespace std;

// if((nums[i]+ nums[j]) == target){
//     pair={i, j};
//     return pair;
// }


// Time Complexity: O(n)= n^2
vector<int> pairSum(vector<int>& nums, int target) {  
    int n= nums.size();
    vector<int> pair;

    for(int i=0; i<n;i++){
        
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
 