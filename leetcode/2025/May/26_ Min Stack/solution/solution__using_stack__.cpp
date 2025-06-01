#include<iostream>
// #include<vector>
#include <algorithm> 
#include<stack>
using namespace std;

// SC = O(2n); for each item, we are saving two value, 1.val 2.min
class MinStack {
    stack<pair<int, int>> s; // pair<val, min_val>
public:
    MinStack() {
        
    }
    //TC= O(1)
    void push(int val){
        int min = INT_MAX;
        if(!s.empty()){
            min =s.top().second;
        }
        min= std::min(min,val);
        s.push({val,min});
    }
    //TC= O(1)
    void pop(){
        s.pop();
    }
    //TC= O(1)
    int top(){
        return s.top().first;
    }
    //TC= O(1)
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
