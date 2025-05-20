#include <iostream>
#include <string>
using namespace std;

class A{
public:
    static int x;
    void incX(){
        x=x+1;
    }
};

int A::x = 0; // Static member must be defined outside the class


class ABC{
public:
    ABC(){
        cout<<"constructor"<<endl;
    }
    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    A obj;
    cout<< obj.x<<endl;
    obj.incX();
    cout<< obj.x<<endl;
    obj.incX();
    cout<< obj.x<<endl;

    cout<< "new object."<<endl;
    A obj2;
    cout<< obj2.x<<endl;
    obj2.incX();
    cout<< obj2.x<<endl;

    cout<< "static object"<<endl;
    // if(true){
    //     ABC obj3;
    // }
    if(true){
        static ABC obj3;
    }
    cout<<"closing main function"<< endl;
    return 0;
}