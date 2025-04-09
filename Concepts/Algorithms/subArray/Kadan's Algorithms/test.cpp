#include <iostream>
#include  <vector> 
using namespace std;

void printSubArray(vector<int>& nums) {  //or, vector<int> &nums
    int start=0, n= nums.size();
    for(int i=start; i<n;i++){
        for(int j= i; j<n;j++){
            for(int k=i; k<j; k++){
                cout<< nums[k];
            }
            cout << " ";
        }
        cout<< endl;

    }
}

int main(){
    vector<int> vec= {1,2,3,4,5,6};
    printSubArray(vec);
    return 0;
}
 