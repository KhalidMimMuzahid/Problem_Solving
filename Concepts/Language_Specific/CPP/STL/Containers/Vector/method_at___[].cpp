#include <iostream>
#include  <vector>
// for run this on cpp, we need to run comand with this->  g++ -std=c++11  
using namespace std;
int main(){
    vector<int> vec= {0,1,2,3,4,5,6,7,8,9};
    cout << vec[5] << endl;
    cout << vec.at(5) << endl;


    return 0;
}
 

