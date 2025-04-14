#include <iostream>
using namespace std;


int main(){
    int a=10;
    int* p=&a;
    cout<< p<< endl; //0x16dd870f8
    p++;  // p--;
    // memory address will be increased to 4 (byte size of p data type)
    // for int, byte size is 4
    
    cout<< p<< endl; //0x16dd870fc 

    p+=3; // +3int      memory address will be increased to 3*4=12 (cause int Data size =4) (byte size of p data type)
    p-=3; // -3int

    int arr[] = {1,2,3,4,5,6};
    cout<< "arr: " << arr << endl; // 0x16f90f0e0
    cout<< "*arr: " << *arr << endl; // 1
    cout<< "*arr: " << *(arr+1) << endl; //2

    int b=5;
    int* ptr3 = &b;
    cout<< "arr3: " << ptr3 << endl; // 0x16d82f0cc
    int* ptr4= ptr3+3;
    cout<< "arr4: " << ptr4 << endl; // 0x16d82f0d8

    cout<< "arr4-arr3: " << ptr4-ptr3 << endl; // 3

    int* ptr5;
    int*ptr6;
    cout << ptr5 << endl; // 0x2086a8380
    cout << ptr6 << endl; // 0xc3b5a4
    cout << "comparision value: " << (ptr5 > ptr6)<< endl; // 1 :(TRUE)

    return 0;
}
 