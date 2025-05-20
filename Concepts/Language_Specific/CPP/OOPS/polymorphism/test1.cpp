#include <iostream>
#include <string>
using namespace std;

class Person {
    public: 
    string name;
    Person(){
        cout<< endl<<"non-parameterized"<<endl;
    }
    // constructor overloading --> compile-time polymorphism
    // parameterized constructor
    Person(string name){
        cout<< endl<<"parameterized"<< endl;
        this->name= name;
    }


};



int main(){
    Person p1;
    return 0;
}