#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*i <=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


int main(){

    int n=13;
    cout<<n<< " is" << (isPrime(n)? " a prime number": " not a prime number") << endl;

    return 0;
}