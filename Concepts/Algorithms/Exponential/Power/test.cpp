#include <iostream>
using namespace std;

double myPow(float number, int n) {

    int binForm=n;
    double answer=1;
    
    if(n ==0) return 1;
    else if(number == 0) return  0.0;
    else if(number ==1) return 1.0;
    else if(number== -1 && n%2 == 0) return 1.0;
    else if(number == -1 && n%2 !=0) return -1.0;
    else if(n<0){
        binForm= -binForm;
        number=1/number;
    }

    while(binForm>0){
        if(binForm%2 ==1){
            answer *=number;
        }
        number*=number;
        binForm /=2;

    }

    return answer;
   
}

int main(){
    float x;
    int n;

    int ans= myPow(x,n);
    cout<<ans<< endl;
    return 0;
}
 