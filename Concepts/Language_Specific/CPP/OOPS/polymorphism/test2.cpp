#include <iostream>
#include <string>
using namespace std;

class Print{
public:
    void show(int x){
        cout<<"int: "<<x<< endl;
    }
    // function overloading --> compile-time polymorphism
    void show(char ch){
        cout<<"char: "<<ch<< endl;
    }
};


int main(){
    Print prt;
    prt.show(5);
    prt.show('x');
    return 0;
}