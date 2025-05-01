#include <iostream>
using namespace std;


int reverseNumber3(int x){
    long long n = abs((long long)x);  
    int signController= x<0? -1: 1;
    string nString= to_string(abs(n));
    std::reverse(nString.begin(), nString.end());
    long long reversedNumber= (stoll(nString))*signController;
    if (reversedNumber < INT_MIN || reversedNumber > INT_MAX) return 0;
    return (int)reversedNumber;
}

int reverseNumber2(int x) {
    long long n = abs((long long)x);  
    long long answer = 0;
    int digitCount = (n == 0) ? 1 : (int)(log10(n) + 1);
    int digitIndex = digitCount - 1;

    while (n != 0) {
        int digit = n % 10;
        answer += digit * pow(10, digitIndex--);
        n /= 10;
    }

    if (x < 0) answer = -answer;

    if (answer < INT_MIN || answer > INT_MAX) return 0;

    return (int)answer;

}


// TC= O(log10(n))
int reverseNumber(int x){
    int answer=0;
    while(x!=0){
        int digit = x%10;
        if(((answer) > (INT_MAX/10)) || ((answer) < (INT_MIN/10)) ){
            return 0;
        }
        answer= (answer*10)+ digit;
        x/=10;
    }
    return answer;
}



int main(){
    int x=-4233589;
    int ans = reverseNumber3(x);

    cout<< endl << ans<< endl;

    return 0;
}