#include <iostream>
#include  <vector> 
using namespace std;
int main(){
    vector<int> vec;
    cout<< "size=" << vec.size()<< endl; 
    cout<< "capacity=" << vec.capacity()<< endl; 
    vec.push_back(1);
    cout<< "size=" << vec.size()<< endl; 
    cout<< "capacity=" << vec.capacity()<< endl; 
    vec.push_back(2);
    cout<< "size=" << vec.size()<< endl; 
    cout<< "capacity=" << vec.capacity()<< endl; 
    vec.push_back(3);
    cout<< "size=" << vec.size()<< endl; 
    cout<< "capacity=" << vec.capacity()<< endl; 
    vec.push_back(4);
    cout<< "size=" << vec.size()<< endl; 
    cout<< "capacity=" << vec.capacity()<< endl; 
    vec.push_back(5); 
    cout<< "size=" << vec.size()<< endl; 
    cout<< "capacity=" << vec.capacity()<< endl; 

    return 0;
}
 