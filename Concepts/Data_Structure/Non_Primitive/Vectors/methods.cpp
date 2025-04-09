#include <iostream>
#include  <vector> 
using namespace std;
int main(){
    vector<int> vec= {1,2,3,4,5};
    cout<< "size=" << vec.size()<< endl; // size()
    vec.push_back(6); // push the the end of the vector
    vec.pop_back(); // remove the value of last index
    for(int each: vec){
        cout << each << endl;
    }

    cout<< vec.at(2)<<endl;  // at(x) method return value of x index

    return 0;
}
 