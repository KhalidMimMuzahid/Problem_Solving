#include <iostream>
using namespace std;

/*
    (x+y)%m = x%m + y%m
    (x-y)%m = ((x % m) - (y % m) + m) % m // for adjusting a negative value
    // some times to adjust LHS= RHS we need to calculate LHS is ((x-y)%m + m) %m -> to adjust negative value
    // for example when x=8, y=9 and m=3
    (x.y)%m = x%m . y%m
*/

int calculateModule(int n, int m){
    return n%m;
}


int main(){
    int x= 8, y=9, m=3;
    int a= calculateModule((x+y), m);
    cout<< "(x+y)%m = " << calculateModule((x+y), m) << " AND (x%m + y%m) = " << calculateModule(x,m)+ calculateModule(y,m)<< endl;
    cout<< "(x-y)%m = " << calculateModule((x-y), m) << " AND (x%m - y%m) = " << calculateModule(x,m)- calculateModule(y,m)<< endl;
    cout<< "(x.y)%m = " << calculateModule((x*y), m) << " AND (x%m . y%m) = " << calculateModule(x,m) * calculateModule(y,m)<< endl;



    return 0;
}