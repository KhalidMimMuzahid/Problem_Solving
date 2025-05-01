#include <iostream>
using namespace std;

int calculateGCD3(int a,int b){
    while(a!=0 && b!=0){
        if(a>=b){
            a= a%b; // a-b
        }
        else{
            b=b%a; //  b-a
        }
    }

    return max(a,b);
}



// optimized
int calculateGCD2(int a,int b){
    if(a==0 || b==0){
        return max(a,b);
    }
    else if(a>=b){
        a= a%b; // a-b
        return calculateGCD2(a,b);
    }
    else{
        b=b%a; //  b-a
        return calculateGCD2(a,b);
    }
}

// optimized
int calculateGCD(int a,int b){
    if( b==0) return a;
    return calculateGCD(b, a%b );
}

int calculateLCM(int a,int b){
    int gcd= calculateGCD(a,b);
    int lcm = (a*b)/gcd; 
    return lcm;
}

int main(){
    int a= 54,b=45;  

    cout<<"GCD: "<< calculateGCD(a,b)<<endl;
    cout<<"LCM: "<< calculateLCM(a,b)<<endl;
    return 0;
}