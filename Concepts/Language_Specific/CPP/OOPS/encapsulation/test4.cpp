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

    // destructor
    ~Student(){
        cout<<"Hi, I delete ev erything\n" ;
        // we no need to delete static memory, we need deleting dynamic allocating memory
        delete cgpaPtr ;
    }

    void getInfo(){
        cout<< "name: "<< name<< endl;
        cout<< "cpga: "<< *cgpaPtr<<endl;
    }
};



int main(){
    Student s1("Sejuti Swapna", 3.75);
    s1.getInfo();

    return 0;
}