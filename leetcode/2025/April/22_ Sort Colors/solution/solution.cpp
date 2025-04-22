#include <iostream>
#include  <vector> 
using namespace std;

void printVector(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

void sortColors(vector<int>& nums) {
    int zeroCount=0, oneCount=0, twoCount=0;

    for(int each: nums){
        if(each == 0){
            zeroCount++;
        }
        else if(each == 1){
            oneCount++;
        }
        else{
            twoCount++;
        }
    }

    for(int i=1; i<= nums.size(); i++){
        if(i<=zeroCount){
            nums[i-1]= 0;
        }
        else if(i <= (zeroCount+oneCount)){
            nums[i-1]= 1;
        }
        else{
            nums[i-1]=2;
        }
    }
}



int main(){
    vector<int> vec= {2,0,2,1,1,0};
    sortColors(vec);
    printVector(vec);

    return 0;
}
 