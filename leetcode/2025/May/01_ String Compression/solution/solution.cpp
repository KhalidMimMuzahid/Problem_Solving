#include <iostream>
#include  <vector> 
using namespace std;

int compress(vector<char>& chars) {
    int index = 0;  // write index
    int i = 0;      // read index

    while (i < chars.size()) {
        char currentChar = chars[i];
        int count = 0;

        // Count how many times the current character appears
        while (i < chars.size() && chars[i] == currentChar) {
            i++;
            count++;
        }
        // Write the character
        chars[index++] = currentChar;
        // Write the count if > 1
        if (count > 1) {
            string countStr = to_string(count);
            for (char c : countStr) {
                chars[index++] = c;  // Safe: total written will never exceed input size
            }
        }
    }
    return index;
}

int main(){
    vector<char> chars= {'a','a','b','b','c','c','c'};
    int ans= compress(chars);

    cout<< ans<<endl;  

    return 0;
}
 