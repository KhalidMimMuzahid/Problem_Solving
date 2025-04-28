#include <iostream>
#include <string> 
using namespace std;

int main() {
    string s1;
    cout << "Enter a string: ";
    getline(cin, s1); // Input a string with spaces
    
    // 1. Using range-based for loop
    cout << "You entered: " ;
    for(char ch: s1){
        cout<< ch << " ";  
    }
    cout << endl;

    // 2. Using iterator
    cout << "\nYou entered: " ;
    for(auto it = s1.begin(); it != s1.end(); ++it){
        cout<< *it << " ";  
    }
    cout << endl;

    // 3. Using for loop
    cout << "\nYou entered: " ;
    for(int i = 0; i < s1.length(); i++){
        cout<< s1[i] << " ";  
    }
    cout << endl;

    // 4. Using while loop
    cout << "\nYou entered: " ;
    int i = 0;
    while(i < s1.length()){
        cout<< s1[i] << " ";  
        i++;
    }
    cout << endl;


    // 5. Using iterator with while loop
    cout << "\nYou entered: " ;
    auto it = s1.begin();
    while(it!=s1.end()){
        cout<< *it << " ";  
        it++;
    }
    cout << endl;


    // 6. Using do-while loop
    cout << "\nYou entered: " ;
    i = 0;
    do{
        cout<< s1[i] << " ";  
        i++;
    }while(i < s1.length());
    cout << endl;

    

    return 0;
}