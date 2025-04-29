#include <iostream>
using namespace std;


string removeOccurrences(string s, string part) {
    int idx = s.find(part);
    while (idx != string::npos) { // Check if part is found in s
        s.erase(idx, part.length()); // Erase part from s
        idx = s.find(part); // Find the next occurrence of part in s
    }

    return s;
        
}

int main(){
    string s = "daabcbaabcbc", part = "abc";

    string output= removeOccurrences(s, part);
    cout<< "output: "<< output<< endl;  

    return 0;
}
  