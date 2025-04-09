#include <iostream>
#include  <vector>
// for run this on cpp, we need to run comand with this->  g++ -std=c++11  
using namespace std;
int main(){
    // vector<int> vec;
    vector<int> vec= {1,2,3};
    cout << vec[0] << endl;

    vector<int> vec2(3,0); // means this vector has total 3 elements and each value is 0.
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;


    return 0;
}
 