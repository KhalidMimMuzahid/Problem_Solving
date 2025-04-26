#include <iostream>
#include <vector>
using namespace std;


int main(){

    string s= "abc";
    next_permutation(s.begin(), s.end());
    cout<<"abc --> "<< s<< endl;

    string s2= "acb";
    prev_permutation(s2.begin(), s2.end());
    cout<<"acb <-- "<< s2<< endl;

    vector<int> nums= {1,2,3,4,5};
    next_permutation(nums.begin(), nums.end());
    cout<< "1 2 3 4 5 --> ";
    for(int val: nums){
        cout<< val<< " ";
    }
    cout<< endl;

    return 0;
}