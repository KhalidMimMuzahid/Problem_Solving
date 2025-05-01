#include <iostream>
using namespace std;

// TC= O(min(a,b)) // or O(n)
int calculateGCD(int a,int b){
    int gcd=1;
    if(a==0 || b==0){
        return max(a,b);
    }
    int range = min(a,b);
    for(int i= range; i>=1; i--){
        if(a%i ==0 && b%i==0){
            gcd= i;
            break;
        }
    }
    return gcd;
}
int main(){
    int a= 54,b=45;  

    cout<<"GCD: "<< calculateGCD(a,b)<<endl;
    return 0;
}