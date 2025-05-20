#include <iostream>
#include <string>
using namespace std;

class Teacher {
    // by default all are private properties and methods
    private: // all are accessible inside class
    double salary; // data hiding

    protected:
    string yy= "";
    
    public: // all are accessible inside class and to its derived class
    // non-parameterized constructor
    Teacher(){ // constructor function, it called only once, when new instance has created. Actually it allocate the memory address for this instance
        cout<< "Hi, I'm a constructor function.";
        dept= "CSE";
    }
    // properties / attributes
    string name;
    string dept;
    string subject;


    // methods
    void changeDepartment(string newDept){
        dept= newDept;
    }
    // setter method
    void setSalary(double num){
        salary= num;
    }
    //getter method
    double getSalary(){
        return salary;
    }
};


class Student{
    public:

};

int main(){
    Teacher t1;
    Teacher t2;
    t1.name = "Khalid" ;
    t1.subject= "DSA";
    t1.setSalary(85000); 
    // t1.changeDepartment("MATH");

    cout<< endl;
    cout<< t1.name << " from " << t1.dept <<" department, He teaches "<< t1.subject<<". His salary is "<< t1.getSalary()<< endl;
    

    return 0;
}