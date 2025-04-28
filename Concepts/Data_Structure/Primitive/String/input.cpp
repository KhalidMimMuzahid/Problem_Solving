#include <iostream>
#include <string> 
using namespace std;

int main() {
    string s1,s2;
    cout << "Enter a string: ";
    cin >> s1; // Input a string without spaces
    cout << "You entered: " << s1 << endl;
    cout << "Length of s1: " << s1.length() << endl; 

    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Enter a string: ";
    // cin.getline(s2, 100); // throw an error, cause cin.getline() only works with character arrays not for string
    // Note: cin.getline() is used to read a string with spaces, but it only works with character arrays, not with string objects.
    
    getline(cin, s2); // Input a string with spaces
    // Note: getline() is a member function of the string class, it reads a line of text from the input stream and stores it in the string object.
    cout << "You entered: " << s2 << endl;
    return 0;
}