#include <iostream>
using namespace std;

void changeValue(int& b){// or int &b (but this & is not for address, it is for alias):  pass by reference using reference/alias
    b=20;
}
int main(){
    int a = 10;
    cout<< "before: " << a<< endl;
    changeValue(a);
    cout<< "after: " << a<< endl;
    return 0;
}
 