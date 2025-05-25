#include <iostream>
#include  <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    cout<<"top: "<< s.top()<<endl;
    s.push(2);
    cout<<"top: "<< s.top()<<endl;
    s.pop();
    cout<<"top: "<< s.top()<<endl;
    cout<< "is empty: "<< s.empty()<<endl;

    s.push(3);
    s.push(4);
    s.push(5);
    while(s.empty() != 1){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}
 