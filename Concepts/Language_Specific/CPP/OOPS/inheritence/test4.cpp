#include <iostream>
#include <string>
using namespace std;

// multiple inheritance

// Base/Parent class for Student 
class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        cout<<"\nPerson Instructor calling.";
        this->name= name;
        this->age= age;
    }  
};

// Base/Parent class for Student 
class University{
    public:
    string uniName;
    string uniCountry;
    University(string uniName, string uniCountry){
        cout<<"\nUniversity Instructor calling.";
        this->uniName= uniName;
        this->uniCountry= uniCountry;
    }  
};

// Child/Derived class for Parent
// Base/Parent class for GradStudent
class Student: public Person, public University{
    public:
    int roll;
    Student(string name, int age, int roll, string uniName,string uniCountry ): Person(name, age),University(uniName, uniCountry){
        this->roll= roll;
    }
    void getInfo(){
        cout<<endl<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "roll: "<< roll<< endl;
        cout<< "uniName: "<< uniName<< endl;
        cout<< "uniCountry: "<< uniCountry<< endl;
    }
};




int main(){
    Student s1( "KHALID", 28, 100, "City University", "Bangladesh");
    s1.getInfo();

    return 0;
} 