#include <iostream>
using namespace std;


// TC= O(log10(x))
void printDigit(int n){
    while(n!=0){
        int digit= n%10;
        cout<< digit<<", ";
        n=n/10;
    }
}

// TC= O(log10(x))
int countDigit(int n){
    int count=0;
    while(n!=0){
        int digit= n%10;
        count++;
        n=n/10;
    }
    return count;
    
}


// TC= O(log10(x))
int sumDigit(int n){
    int sum=0;
    while(n!=0){
        int digit= n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}


int main(){

    int n=1234;
    printDigit(n);
    cout<<endl;

    // we can use this shortcut to count the digit os a number
    // cout<< "count: "<<  (int)(log10(n)+1) << endl;
    

    return 0;
}