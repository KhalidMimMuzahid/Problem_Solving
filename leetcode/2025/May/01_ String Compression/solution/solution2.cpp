#include <iostream>
#include  <vector> 
using namespace std;

int compress(vector<char>& chars) {
    string s="";
    int i=0;
    while(i< chars.size()){
        char c= chars[i];
        int charCount=0;
        string charCountPair="";
        for(i=i; i< chars.size() && chars[i] ==c ;i++){
            charCount++;
        }

        if(charCount >1){
            charCountPair= c+ to_string(charCount);
        }
        else{
            charCountPair= c;
        }
        s+=charCountPair;
        // i++;
    }

    for(int i=0; i<s.length(); i++){
        chars[i]= s[i];
    }

    // cout<<"pair:: ["<<s<<"]"<<endl;

    return s.length();
        
}

int main(){
    vector<char> chars= {'a','a','b','b','c','c','c'};
    int ans= compress(chars);

    cout<< ans<<endl;  

    return 0;
}
 