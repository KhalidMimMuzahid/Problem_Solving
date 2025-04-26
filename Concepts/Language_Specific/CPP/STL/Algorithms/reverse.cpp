#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> nums= {1,2,3,4,5,8,7,6,9};
    reverse(nums.begin(), nums.end()); // reverse the whole vector
    for(int val: nums){
        cout<< val<< " ";
    }
    cout<< endl;

    reverse(nums.begin()+1, nums.begin()+4); // reverse from  index 1 to index (4-1)=3
    for(int val: nums){
        cout<< val<< " ";
    }
    cout<< endl;

    return 0;
}