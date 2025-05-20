#include <iostream>
#include <string>
using namespace std;

// multi level inheritance
// Base/Parent class for Student & GradStudent
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
// Base/Parent class for GradStudent
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

// Child/Derived class for Student
class GradStudent: public Student{
    public:
    string dept;
    int semester;
    GradStudent(string name, int age, int roll, string dept, int semester): Student(name, age, roll){
        this->dept= dept;
        this->semester= semester;
    }
    void getInfo(){
        cout<<endl<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "roll: "<< roll<< endl;
        cout<< "dept: "<< dept<< endl;
        cout<< "semester: "<< semester<< endl;    }
};


int main(){
    Student s1( "KHALID", 28, 100);
    s1.getInfo();

    GradStudent gs1( "Ashik", 26, 1, "Psychology", 5);
    gs1.getInfo();
    return 0;
}