#include <iostream>
using namespace std;

void changeValue(int* b){  //pass by reference using pointers
    *b=20;
}
int main(){
    int a = 10;
    cout<< "before: " << a<< endl;
    changeValue(&a);
    cout<< "after: " << a<< endl;
    return 0;
}
 