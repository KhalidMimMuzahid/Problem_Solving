#include <iostream>
#include  <vector> 
using namespace std;

void printVector(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

void sortColors(vector<int>& nums) { // T=O(2n) = // O(n) :: T= O(1)
    int m=0, h=nums.size()-1, l=0;

    while(m<=h){
        if(nums[m]== 0){
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else  if(nums[m] == 1){
            m++;
        }
        else{
            swap(nums[m], nums[h]);
            h--;
        }
    }
}



int main(){
    vector<int> vec= {2,0,2,1,1,0};
    sortColors(vec);
    printVector(vec);

    return 0;
}
  