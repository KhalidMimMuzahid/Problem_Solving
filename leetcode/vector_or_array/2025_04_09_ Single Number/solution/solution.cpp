#include <iostream>
#include  <vector> 
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int each: nums){
        ans= ans^each;
    }
    return ans;
    
}

int main(){
    vector<int> vec= {4,1,2,1,2};
    int num= singleNumber(vec);

    cout<< num<<endl;  

    return 0;
}
 