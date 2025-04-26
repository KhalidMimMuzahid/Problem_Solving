#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> nums= {1,2,3,4,5};
    int x=3;
    // binary_search() is bool type function, it will return true or false
    cout<< x<< " has found: "<< binary_search(nums.begin(), nums.end(),x) << endl;
    x= 6;
    cout<< x<< " has found: "<< binary_search(nums.begin(), nums.end(),x) << endl;
    return 0;
}