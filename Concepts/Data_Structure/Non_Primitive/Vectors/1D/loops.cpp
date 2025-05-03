#include <iostream>
#include  <vector>
// for run this on cpp, we need to run comand with this->  g++ -std=c++11  
using namespace std;
int main(){
    vector<int> vec= {1,2,3,4,5};
    for(int each: vec){
        cout<< each <<endl;
    }


    return 0;
}
 