#include<iostream>
#include<vector>
#include <algorithm> 
// #include<stack>
using namespace std;
class MinStack {
    vector<pair<int, int>> v; // pair<val, min_val>
public:
    MinStack() {
        
    }
    //TC= O(1)
    void push(int val){
        int min = INT_MAX;
        if(v.size()!=0){
            min =v[v.size()-1].second;
        }
        min= std::min(min,val);
        v.push_back({val,min});
    }
    //TC= O(1)
    void pop(){
        v.pop_back();
    }
    //TC= O(1)
    int top(){
        return v[v.size()-1].first;
    }
    //TC= O(1)
    int getMin() {
        return v[v.size()-1].second;
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
