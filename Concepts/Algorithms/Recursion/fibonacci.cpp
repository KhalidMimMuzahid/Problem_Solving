#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1)return n;
    return  fibonacci(n-1)+ fibonacci(n-2);
}



int main(){
    int n = 6;
    int ans =fibonacci(n);
    cout << "ans: "<< ans<< endl;

    return 0;
}