#include <iostream>
#include <string> 
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    // concatenation
    string str3 = str1 + " " + str2; // Concatenation using + operator
    cout << "Concatenated string: " << str3 << endl;
    cout << "Length of str3: " << str3.length() << endl; // Length of the string

    // comparision 
    bool isEqual = str1 == str2; // Comparison using == operator
    cout << "Are str1 and str2 equal? " << (isEqual ? "Yes" : "No") << endl;

    bool isNotEqual = str1 != str2; // Comparison using != operator
    cout << "Are str1 and str2 not equal? " << (isNotEqual ? "Yes" : "No") << endl;

    // comparison using < operator
    bool isLess = str1 < str2; // Comparison using < operator
    cout << "Is str1 less than str2? " << (isLess ? "Yes" : "No") << endl;
    // comparison using > operator
    bool isGreater = str1 > str2; // Comparison using > operator
    cout << "Is str1 greater than str2? " << (isGreater ? "Yes" : "No") << endl;

    // comparison using <= operator
    bool isLessOrEqual = str1 <= str2; // Comparison using <= operator
    cout << "Is str1 less than or equal to str2? " << (isLessOrEqual ? "Yes" : "No") << endl;
    // comparison using >= operator
    bool isGreaterOrEqual = str1 >= str2; // Comparison using >= operator
    cout << "Is str1 greater than or equal to str2? " << (isGreaterOrEqual ? "Yes" : "No") << endl;


    return 0;
}