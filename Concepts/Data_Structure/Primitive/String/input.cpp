#include <iostream>
using namespace std;


int main() {
    char s[100], s2[100], s3[100];
    cout<< "Enter a string: ";
    // Note: cin stops reading input at the first whitespace character (space, tab, newline).
    cin >> s; // Input a string

    cout << "You entered: " << s << endl; // Output the string without space , after the space it will not take the input

    cout<< "Enter a string: ";
    cin.ignore(); // <-- flush the leftover newline for the previous input and make sure the next input is read correctly
    // Note: cin.ignore() is used to ignore the newline character left in the input buffer after the previous input.

    // To read a string with spaces, use cin.getline()
    // cin.getline(str, len, delimiter) // delimiter is optional, default value is '\n', it will stop reading when it sees '\n'. you can also use any other character as a delimiter like ' ' or '\t' or '.' or anything you want
    cin.getline(s2, 100); // Input a string with spaces
    cout << "You entered: " << s2 << endl;

    cout<< "Enter a string: ";
    cin.ignore();
    cin.getline(s3, 100, '$'); // Input a string with spaces and stop reading at the first $ character
    // Note: cin.getline() reads until it encounters the delimiter or the maximum length of the string.
    // If the delimiter is not found, it will read until the maximum length of the string.
    cout << "You entered: " << s3 << endl; // Output the string with space


    return 0;
}
