#include <iostream>
#include <string>
using namespace std;

// Base/Parent class for Student
class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name= name;
        this->age= age;
    }  
};

// Child/Derived class for Parent
class Student: public Person{
    public:
    int roll;
    Student(string name, int age, int roll): Person(name, age){
        this->roll= roll;
    }
    void getInfo(){
        cout<<endl<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "roll: "<< roll<< endl;
    }
};


int main(){
    Student s1( "KHALID", 28, 100);
    s1.getInfo();
    cout<< s1.name<< endl;
    return 0;
}