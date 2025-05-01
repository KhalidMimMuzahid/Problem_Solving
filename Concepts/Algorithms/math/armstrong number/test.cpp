#include <iostream>
#include <cmath>
using namespace std;


// TC= O(log10(x))
    bool isArmstrong(int n){
        int initialNum= n;
        int sum = 0;
        while(n !=0){
            int digit= n%10;
            n/=10;
            sum = sum + pow(digit, 3);
            if(sum> initialNum){
                return false;
            }
        }
        return initialNum==sum;
    }


int main(){

    int n=371;//  153;
    bool isArmstrongNumber= isArmstrong(n);

    cout<< n << " is " << (isArmstrongNumber? "a armstrong number" : "not a armstrong number")<<endl;
    return 0;
}