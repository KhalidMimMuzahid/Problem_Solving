#include <iostream>
#include <string>
using namespace std;

// Base/Parent class for Student
class Person{
    public:
    string name;
    int age;
    // Person(string name, int age){
    //     this->name= name;
    //     this->age= age;
    // }

    Person(){
        cout<<"\nPerson (Parent) Constructor is calling";
    }
    ~Person(){
        cout<<"\nPerson (Parent) Destructor is calling\n";
    }    
};

// Child/Derived class for Parent
class Student: public Person{
    public:
    int roll;
    Student(){
        cout<<"\nStudent (Child) Constructor is calling";
    }
    ~Student(){
        cout<<"\nStudent (Child) Destructor is calling";
    }
    void getInfo(){
        cout<<endl<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "roll: "<< roll<< endl;
    }
};


int main(){
    Student s1;
    s1.name= "KHALID";
    s1.age =28;
    s1.roll =100;

    s1.getInfo();


    return 0;
}