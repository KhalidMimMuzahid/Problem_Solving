#include <iostream>
using namespace std;
#include <cctype> 


bool isPalindrome(string s) {
    int start=0, end=s.size()-1;
    bool isValid= true;

    while(start<=end){
        cout<<"start: "<< s[start]<<"  end: "<< s[end]<<endl;
        if(!isalnum(s[start])){
            start++;
        }
        else if(!isalnum(s[end])){
            end--;
        }
        else if(tolower(s[start]) == tolower(s[end])){
            start++; end--;
        }
        else{
            isValid= false;
            break;
        }
    }
    return isValid;
}

        

int main(){
    string s= "A man, a plan, a canal: Panama";

    bool isValidPalindrome= isPalindrome(s);
    cout<< isValidPalindrome<< endl;  

    return 0;
}
  