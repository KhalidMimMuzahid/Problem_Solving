#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// TC= O(n)
// SC = O(n)
vector<int> solution(vector<int>& price){
    vector<int> ans;
    stack<int> s;
    for(int i=0; i< price.size(); i++){
        while (s.size() !=0 && price[s.top()] <= price[i])
        {
            s.pop();
        }
        if(s.empty()){
            ans.push_back(i+1);
        }
        else{
            ans.push_back(i-s.top());
        }
        s.push(i);
    }

    return ans;
}


int main(){
    // stock prices
    vector<int> price= {100,80,60,70,60,75,85};

    vector<int> ans= solution(price);
    for(int val: ans){
        cout<<val<< " ";
    }
    cout<<endl;
    return 0;
}