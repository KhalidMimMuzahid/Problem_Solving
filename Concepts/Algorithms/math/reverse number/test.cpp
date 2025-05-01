#include <iostream>
using namespace std;

int reverseNumber3(int x){
    int signController= x<0? -1: 1;
    string xString= to_string(abs(x));
    reverse(xString.begin(), xString.end());
    return (stoi(xString))*signController; // stoi is used for type casting (string to integer)
}



// TC= O(log10(n))
int reverseNumber2(int n){
    int answer=0;
    int digitCount = (int)(log10(abs(n))+1);
    int digitIndex= digitCount-1;
    while(n!=0){
        int digit = n%10;
        answer+= digit* pow(10,(digitIndex--));
        n/=10;
    }
    return answer;
}

// TC= O(log10(n))
int reverseNumber(int n){
    int answer=0;
    while(n!=0){
        int digit = n%10;
        answer= (answer*10)+ digit;
        n/=10;
    }
    return answer;
}



int main(){
    int n= -4233589;
    int ans = reverseNumber3(n);

    cout<< endl << ans<< endl;

    return 0;
}