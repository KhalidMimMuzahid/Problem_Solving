#include <iostream>
using namespace std;


// TC= O(n^(2/3)) = n*root(n)
void allPrime(int n){

    for(int i=2; i<=n;i++){
        bool isPrime = true;
        for( int j=2; j*j <=i; j++){
            if(i%j == 0){
                isPrime= false;
                break;
            }
        }
        if(isPrime){
            cout<< i<<", " ;
        }
        
    }
    cout<< endl;
}


int main(){

    int n=50;
    allPrime(n);

    return 0;
}