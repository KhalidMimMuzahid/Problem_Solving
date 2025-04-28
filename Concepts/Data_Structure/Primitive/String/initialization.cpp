#include <iostream>
#include <string> 
using namespace std;

int main() {
    // string is dynamic => it can grow and shrink in size in runtime
    // string is a class in C++ STL (Standard Template Library)

    string s1= "hello world"; // string initialization
    string s2(10, 'a'); // string initialization with 10 'a' characters

    cout << "s1: " << s1 << endl; // Output: hello world
    cout << "s2: " << s2 << endl; // Output: aaaaaaaaaa
    cout << "s2 length: " << s2.length() << endl; // Output: 10
    cout << "s2 size: " << s2.size() << endl; // Output: 10 


    string s3= "Khalid Mim Muzahid"; // string initialization with a string literal
    cout << "s3: " << s3 << endl; // Output: Khalid Mim Muzahid
    s3="Sejuti Akter Swapna"; // string assignment
    cout << "s3: " << s3 << endl; // Output: Sejuti Akter Swapna


    char s4[]= "Khalid Mim Muzahid"; // character array initialization
    cout << "s4: " << s4 << endl; // Output: Khalid Mim Muzahid
    // s4= "Sejuti Akter Swapna"; // it will give error, cause in char array we can't assign a string literal to a character array after initialization
    return 0;
}