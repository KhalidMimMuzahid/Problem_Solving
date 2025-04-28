#include <iostream>

using namespace std;

int main(){

    // 1. character array initialization C-style string initialization
    char str[]= {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}; //character array initialization
    


    // 2. string literal initialization
    char str_[] = "Hello World"; // The compiler automatically adds the null terminator \0 at the end.

 
    // internally, these characters are getting converted to a single string
    cout<< str << endl; // constant pointer,  Output: Hello World

    int nums[]={1, 2, 3, 4, 5}; // C-style array initialization
    cout<< nums<< endl; // Output: Address of the first element


    char str2[]={'a', 'b', 'c', 'd', 'e', 'f'}; 
    cout << str2 << endl; // Output: abcdef , after this string it has not ended, thats why when you run multiple time this code you will different character has added after the string "abcdef"
    cout<< strlen(str2)<< endl; // Output: 6, when you run multiple timeoutput will be different like 6, 7 or 8. 
    char str3[]={'a', 'b', 'c', 'd', 'e', 'f', '\0'}; 
    cout << str3 << endl; // Output: abcdef
    char str4[]={'a', 'b', 'c', 'd', 'e', 'f', '\0', 'g', 'h', 'i', 'j'}; 
    cout << str4 << endl; // Output: abcdef , cause the array has end when it see "\0"
    cout<< strlen(str4)<< endl; // Output: 6, cause the array has end when it see "\0"

    return 0;
}