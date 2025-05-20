#include <iostream>
#include <string>
using namespace std;

void fun(){
    int x= 0;
    cout<<"x: "<<x<<endl;
    x++;
}

void fun2(){
    static int x= 0; // x will initialized only once, no matters how many times you call fun2 function
    cout<<"x: "<<x<<endl;
    x++;
}

int main(){
    fun();// x: 0
    fun();// x: 0
    fun();// x: 0

    fun2();// x: 0
    fun2();// x: 1
    fun2();// x: 2
    return 0;
}