#include <iostream>
using namespace std;

bool isPalindrome(int x){
    if(x<0) return false;// negative number can not be a palindrome
    int reversedNumber=0;
    int temp= x;
    while(x!=0){
        int digit = x%10;
        reversedNumber = reversedNumber*10+digit;
        x/=10;
    }
    return temp == reversedNumber;
}


int main(){
    int n= 54322345;
    bool ans = isPalindrome(n);

    cout<<n<< " is" << (ans? " a palindrome number": " not a palindrome number") << endl;

    return 0;
}