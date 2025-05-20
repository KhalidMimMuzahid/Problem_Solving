#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private: 
    double salary; 

    protected:
    string yy= "";
    
    public: 
    // non-parameterized constructor
    Teacher(){
        cout<< endl<<"New Teacher has created with no initialized value.";
    }
    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        cout<< endl<<"New Teacher has created with initialized value.";
        // (*this).name= name;
        this->name= name; // same as previous one, for better understanding it support -> 
        this->dept= dept;
        this->subject= subject;
        this->salary= salary;
    }

    // copy constructor // this is shallow copy-constructor, and default  copy-constructor is a shallow
    Teacher(Teacher &oriObj){ // pass by reference
        cout<< endl<<"New Teacher has created with the same value as oriObj.";
        this->name= oriObj.name;
        this->dept= oriObj.dept;
        this->subject= oriObj.subject;
        this->salary= oriObj.salary;

    }

    // properties / attributes
    string name;
    string dept;
    string subject;


    //getter method
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<< name << " from " << dept <<" department, He teaches "<< subject<<". His salary is "<< salary<< endl;
    }
};



int main(){
    Teacher t1("Khalid", "CSE", "DSA", 6500);
    Teacher t2(t1); // its calling default copy constructor (copy constructor has invoked)


    cout<< endl;
    t1.getInfo();
    t2.getInfo();

    return 0;
}