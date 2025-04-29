#include <iostream>
#include <string> 
using namespace std;

int main() {
    string s1 = "hello world"; // string initialization
    
    //length of the string
    cout << "Length of s1: " << s1.length() << endl; // Output: 11

    //size of the string
    cout << "Size of s1: " << s1.size() << endl; // Output: 11

    //capacity of the string
    cout << "Capacity of s1: " << s1.capacity() << endl; // Output: 15 (or more, depending on the implementation)
    
    // reserve the string
    reverse(s1.begin(), s1.end()); // Reverse the string
    cout<< "Reversed s1: " << s1<< endl; 
    


    return 0;
}