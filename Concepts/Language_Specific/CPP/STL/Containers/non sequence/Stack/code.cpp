#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack<int> s; // LIFO
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);
    cout<< "top: "<< s.top()<< endl;
    s.pop();
    cout<< "top: "<< s.top()<< endl;
    cout<< "size: " << s.size()<<endl;

    cout<<"isStackEmpty: "<< s.empty()<< endl;
    while(! s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    stack<int> s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);
    cout<< "s2 size: " << s2.size()<<endl;

    stack<int> s3;
    s3.push(7);
    s3.push(8);
    s3.push(9);
    cout<< "s3 size: " << s3.size()<<endl;
    
    s3.swap(s2);

    cout<< "s2 size: " << s2.size()<<endl;
    cout<< "s3 size: " << s3.size()<<endl;

    return 0;
}

