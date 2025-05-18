#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(string s){
    string s2 =s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}

void helper(string s, vector<vector<string>>& ans, vector<string>& partition){
    if(s== ""){
        ans.push_back(partition);
        return;
    }
    for(int i=0; i<s.size(); i++){
        string part= s.substr(0,i+1);
        if(is_palindrome(part)){
            partition.push_back(part);
            helper(s.substr(i+1), ans, partition);
            partition.pop_back();
        }
    }
}


// TC= O(N * 2^N)
vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> partition;
    helper(s,ans, partition);
    return ans;
}

int main(){
    string s = "aaaa"; // "aab";
    vector<vector<string>> ans= partition(s);
    for(vector<string> partition: ans){
        cout<<"[";
        for(string part: partition){
            cout<<" "<< part;
        }
        cout<<" ]"<<endl;
    }
    cout<<endl;
    return 0;
}