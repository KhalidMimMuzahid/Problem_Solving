#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"Parent class"<< endl;
    }
    // virtual function -> run-time polymorphism
    virtual void hello(){
        cout<< "hello from parent"<< endl;
    }
};

class Child: public Parent{
public:
    // function over-ridding --> run-time polymorphism
    void show(){
        cout<<"child class"<< endl;
    }
    void hello(){
        cout<< "hello from child"<< endl;
    }
};


int main(){
    Child c1;
    c1.show();
    c1.hello();
    return 0;
}