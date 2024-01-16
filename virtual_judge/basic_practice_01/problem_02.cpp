#include<bits/stdc++.h> 
using namespace std;
int main() {

    // // 1st way to solve 
    // string s; cin>>s;
    // for(int i=0; i<s.length(); i+=2){  //s.size() or s.size()
    //     cout<<s[i];
    // }

    // 2nd way to solve 
    char s1[100000];cin>>s1;
    for(int i=0; i<strlen(s1); i+=2){    //for the char Array, getting the length use, strlen(s1)
        cout<<s1[i];
    }

    cout<<endl;
    return 0;
}