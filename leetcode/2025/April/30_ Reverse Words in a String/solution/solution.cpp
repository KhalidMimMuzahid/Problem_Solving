#include <iostream>
using namespace std;


// TC= O(n) 
// here have 2 loop, one inside other, but actually they are increasing one value i++, thats why they both are loopover the string only once.
string reverseWords(string s) { 
    string ans = "";
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++) {
        string word = "";
        while(i < s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0) {
            ans += (" " + word);
        }
    }
    return ans.substr(1);
}

int main(){
    string s = "     the     sky is blue     ";
    // "  the sky  ";
    string reversedString = reverseWords(s);
    cout<< "reversedString: ["<< reversedString<< "]" << endl; 

    return 0;
}
  