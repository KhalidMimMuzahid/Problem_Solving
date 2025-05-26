#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch: s){
            if(ch == ')' || ch == '}' || ch == ']'){ // for closing brackets
                if(st.size()==0) return false; // if the  stack is empty then not valid
                else if((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '[')){
                    return false;
                }
                
                st.pop();
            }
            else{ // for opening brackets
                st.push(ch);
            }
        }
        return st.size() ==0;
    }
};


int main(){
    string s = "()[]{}";
    Solution sol;
    cout<<"isValid: "<<sol.isValid(s)<<endl;
    return 0;
}