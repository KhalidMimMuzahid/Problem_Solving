#include <iostream>
#include  <vector> 
using namespace std;

void reverseVectors(vector<int>& nums) {  //or, vector<int> &nums
    int start=0, end= nums.size()-1;
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }    
}

int main(){
    vector<int> vec= {4,1,2,1,2};
    reverseVectors(vec);

    for(int val: vec){
        cout<< val << " ";
    } 
    cout << endl;

    return 0;
}
 