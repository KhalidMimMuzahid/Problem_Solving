#include <iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5,6};
    int arr2[] = {7,2,3,4,5,6};

    cout<< "arr: " << arr<< endl; // 0x16fd6b0f0
    cout<< "arr2: " << arr2<< endl; // 0x16fd6b0d0
    cout<< "*arr: " << *arr << endl; // 1
    cout<< "*arr2: " << *arr2 << endl; // 7
    
    cout<< "*arr2: " << *arr2 << endl; // 7

    cout<< "*arr2: " << arr2 << endl; // 7

    cout<< "*arr2: " << *(arr2 +1) << endl; // 2 : the value will be the value of next index
    
    // arr= 5; // Error: expression must be a modifiable lvalue
    // when we declare a array and initialize it, it will be constant, we cant replace the value
    return 0;
}
 