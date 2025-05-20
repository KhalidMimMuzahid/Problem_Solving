#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name= name;
        cgpaPtr = new double; // dynamic memory allocation
        *cgpaPtr= cgpa;
    }

    // this is shallow copy-constructor, and default  copy-constructor is a shallow
    // Student(Student &obj){
    //     this->name= obj.name;
    //     this->cgpaPtr= obj.cgpaPtr;
    // }

    // this is deep copy-constructor
    Student(Student &obj){
        this->name= obj.name;
        cgpaPtr = new double; // dynamic memory allocation
        *cgpaPtr=  *(obj.cgpaPtr);
    }

    void getInfo(){
        cout<< "name: "<< name<< endl;
        cout<< "cpga: "<< *cgpaPtr<<endl;
    }
};



int main(){
    Student s1("Sejuti Swapna", 3.75);
    Student s2(s1);

    
    // s1.getInfo();
    *(s2.cgpaPtr) = 4.0;
    s2.getInfo();

    s1.getInfo();

    return 0;
}