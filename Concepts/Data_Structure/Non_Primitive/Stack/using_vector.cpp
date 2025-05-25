#include <iostream>
#include  <vector>
using namespace std;

class Stack{
    vector<int> v;
public:
    // Stack(){

    // }
    // O(1)
    void push(int val){
        v.push_back(val);
    }
    // O(1)
    void pop(){
        v.pop_back();
    }
    // O(1)
    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size()==0;
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
 