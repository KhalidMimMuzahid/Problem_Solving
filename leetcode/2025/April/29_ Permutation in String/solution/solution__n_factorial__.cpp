#include <iostream>
using namespace std;
#include <cctype> 

bool checkInclusion(string s1, string s2) {
    string s= s1;
    do{
        cout<< "s1: " << s1 << endl;
        if(s2.find(s1) != string::npos){
            return true;
            break;
        }
        next_permutation(s1.begin(), s1.end());
    }while(s1 != s);

    return false;
        
}        

int main(){
    string s1 = "ab", s2 = "eidbaooo";
    bool isSubString = checkInclusion(s1, s2);
    cout<< isSubString<< endl; 

    return 0;
}
  