#include<iostream>
// #include<vector>
#include <algorithm> 
#include<stack>
using namespace std;


// SC = O(n)
class MinStack {
    stack< long long int> s; // pair<val, min_val>
    long long int min;
public:
    MinStack() {
        
    }
    //TC= O(1)
    void push(int val){
        if(s.empty()){
            s.push(val);
            min= val;
        }
        else if(val<min){
            s.push((long long)2*val-min);
            min= val;
        }
        else{
            s.push(val);
        }
    }
    //TC= O(1)
    void pop(){
        if(s.empty())return;
        long long int topTempVal= s.top();
        long long int oldMin=2*min-topTempVal;

        if(min<oldMin){
            min= oldMin;
        }
        s.pop();
    }
    //TC= O(1)
    int top(){
        if(s.empty())return NULL;
        long long int topTempVal= s.top();
        long long int oldMin=2*min-topTempVal;

        if(min<oldMin){
            return min;
        }
        return s.top();
    }
    //TC= O(1)
    int getMin() {
        return min;
    }
};


// SC = O(n)
class MinStack {
    stack< long long int> s; // pair<val, min_val>
    long long int min;
public:
    MinStack() {
        
    }
    //TC= O(1)
    void push(int val){
        if(s.empty()){
            s.push(val);
            min= val;
        }
        else if(val<min){
            s.push((long long)2*val-min);
            min= val;
        }
        else{
            s.push(val);
        }
    }
    //TC= O(1)
    void pop(){
        if(s.empty())return;
        if(s.top()<min){
            min= (long long)2*min-s.top();
        }
        s.pop();
    }
    //TC= O(1)
    int top(){
        if(s.empty())return NULL;
        if(s.top()<min){
            return min;
        }
        else{
            return s.top();
        }
    }
    //TC= O(1)
    int getMin() {
        return min;
    }
};

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */
