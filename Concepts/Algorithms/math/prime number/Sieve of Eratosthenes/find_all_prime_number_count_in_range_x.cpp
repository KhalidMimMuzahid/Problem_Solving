#include <iostream>
#include  <vector> 
using namespace std;


// TC= O(nlogn)
int countPrimes2(int n) {
    vector<bool> primes(n,true);
    int primeCount=0;
    for(int i=2; i<n; i++){
        if(primes[i]){
            for(int j= i+i; j<n; j+=i){
                primes[j]= false;
            }
            primeCount++;
            cout<< i<< ", ";
        }
    }
    return  primeCount;
        
}

// TC= O( nlog(logn) )
int countPrimes(int n) {
    vector<bool> primes(n,true);
    int primeCount=0;
    for(int i=2; i*i<n; i++){
        if(primes[i]){
            for(int j= i*i; j<n; j+=i){
                primes[j]= false;
            }
        }
    }

    for (int i = 2; i < n; i++) {
        if (primes[i]){
            cout<< i<< ", ";
            primeCount++;
        }
    }
    return  primeCount;
}

int main(){
    int n = 50;
    int ans= countPrimes(n);

    cout<<endl<< ans<<endl;  

    return 0;
}
 