#include <iostream>
using namespace std;



int main(){
    int a=10;

    int* p=&a; // int *p=&a
    int** p2=&p; //pointer to pointer: p2 is a pointer which store the address of another pointer
     // address always starts with 0x the actual address value; --> 0x16ee6f118


    cout << "a= " << a << endl; // 10
    cout << "&a = " << &a << endl; // address value of a --> 0x16ee6f118
    cout << "p = &a = " << p << endl; // address value of a --> 0x16ee6f118
    cout << "&p = " << &p << endl; // address value of p --> 0x16af0b110
    cout << "*p = *(&a) = a = " << *p << endl; // 10: * is dereference operator (value of the address)
    cout << "&p2 = " << &p2 << endl; // address value of p2 --> 0x16b8b3108
    cout << "p2 = &p = " << p2 << endl; // address value of p --> 0x16af0b110
    cout << "*p2 = *(&p) = p = &a= " << *p2 << endl; // address value of p --> 0x16bae7118
    cout << "**p2 = *(*(&p)) = *p = *(&a) = a = " << **p2 << endl; // 10:  value of a

    return 0;
}
 