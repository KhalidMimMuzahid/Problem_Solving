#include <iostream>
#include <string>
using namespace std;

// Hierarchial Inheritance

// Base/Parent class for Teacher & Student
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
        cout<<"Student Info:"<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "roll: "<< roll<< endl;
    }
};

// Child/Derived class for Parent
class Teacher: public Person{
    public:
    double salary;
    Teacher(string name, int age, double salary): Person(name, age){
        this->salary= salary;
    }
    void getInfo(){
        cout<<endl<<endl;
        cout<<"Teacher Info:"<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "salary: "<< salary<< endl;
    }
};


int main(){
    Student s1( "KHALID", 28, 100);
    s1.getInfo();
    
    Teacher t1( "Swapna", 21, 100000);
    t1.getInfo();

    return 0;
}