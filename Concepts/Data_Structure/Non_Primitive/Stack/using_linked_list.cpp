#include <iostream>
#include  <vector>
#include <list>
using namespace std;



class Stack{
    list<int> l;
public:
    // Stack(){

    // }
    // O(1)
    void push(int val){
        l.push_front(val);
    }
    // O(1)
    void pop(){
        l.pop_front();
    }
    // O(1)
    int top(){
        return l.front();
    }

    bool empty(){
        return l.size()==0;
    }

};
int main(){
    Stack s;
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
 