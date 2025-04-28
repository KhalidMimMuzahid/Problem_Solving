#include <iostream>

using namespace std;

int main(){
    char s[]= "hello world", s2[100], s3[100];

    for(char val: s){
        cout<< val << " "; // Output: h e l l o   w o r l d
    }
    cout<< endl;

    cout<< "Enter a string: ";
    cin.getline(s2, 100); // Input a string with spaces
    cout << "You entered"<< endl;
    for(char ch: s2){
        cout<< ch << " ";  // if i input less that 100 character then it may print garbage value
    }
    cout<< endl;



    cout<< "Enter a string: ";
    cin.ignore();
    cin.getline(s3, 100); // Input a string with spaces
    cout << "You entered"<< endl;
    for(char ch: s3){
        if(ch == '\0') break; 
        cout<< ch << " ";   // now it will not print garbage value, cause we are checking if the character is '\0' then we will break the loop
    }
    cout<< endl;

    return 0;
}