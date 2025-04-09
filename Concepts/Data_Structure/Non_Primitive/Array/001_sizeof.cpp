#include <iostream>
using namespace std;
int main(){
    int marks[5]= {65,34,56,78,90};
    int size=5;
    // cout << sizeof(marks)/sizeof(marks[0]) << endl;
    cout << sizeof(marks)/sizeof(int) << endl;


    return 0;
}