#include <iostream>
#include <string>
using namespace std;

// Hybrid Inheritance


class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name= name;
        this->age= age;
    }  
};

class University{
    public:
    string uniName;
    string uniCountry;
    University(string uniName, string uniCountry){
        this->uniName= uniName;
        this->uniCountry= uniCountry;
    }  
};


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


class Student: public Person, public University{
    public:
    int roll;
    Student(string name, int age, int roll, string uniName,string uniCountry ): Person(name, age),University(uniName, uniCountry){
        this->roll= roll;
    }
    void getInfo(){
        cout<<endl<<endl;
        cout<<"Student Info:"<<endl;
        cout<< "name: "<< name<< endl;
        cout<< "age: "<< age<< endl;
        cout<< "roll: "<< roll<< endl;
        cout<< "uniName: "<< uniName<< endl;
        cout<< "uniCountry: "<< uniCountry<< endl;
    }
};








int main(){    
    Teacher t1( "Swapna", 21, 100000);
    t1.getInfo();

    Student s1( "KHALID", 28, 100, "City University", "Bangladesh");
    s1.getInfo();

    return 0;
}