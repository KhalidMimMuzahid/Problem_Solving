#include<iostream>
#include <algorithm> 
// #include<stack>
using namespace std;

class Node{
public:
int val;
int min;
Node* down;
};
class MinStack {
    Node* head;
public:
    MinStack() {
        head=NULL;
    }
    //TC= O(1)
    void push(int val){
        int min = INT_MAX;
        if(head !=NULL){
            min = head->min;
        }
        min= std::min(min,val);
        Node* newNode= new Node();
        newNode->val= val;
        newNode->min= min;
        newNode->down= head;
        head= newNode;
    }
    //TC= O(1)
    void pop(){
        if(head == NULL) return;
        Node* temp = head;
        head= head->down;
        delete temp;
    }
    //TC= O(1)
    int top(){
        return head->val;
    }
    //TC= O(1)
    int getMin() {
        return head->min;
    }

    // void printS(){
    //     Node* temp= head;
    //     while(temp!=NULL){
    //         cout<< "val: "<< temp->val<< " <=> min: "<< temp->min<< endl;
    //         temp= temp->down;
    //     }
    // }
};

int main(){
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    // obj->printS();
    cout<<"getMin: "<< obj->getMin()<<endl;
    obj->pop();
    cout<<"top:"<<obj->top()<<endl;
    // obj->printS();
    cout<<"getMin: "<< obj->getMin()<<endl;

    return 0;
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
