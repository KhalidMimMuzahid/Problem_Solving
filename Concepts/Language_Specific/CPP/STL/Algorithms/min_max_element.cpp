#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> nums= {1,2,3,4,5};
    cout<< "max element: "<< *(max_element(nums.begin(), nums.end()))<< endl;
    cout<< "min element: "<< *(min_element(nums.begin(), nums.end()))<< endl;

    return 0;
}