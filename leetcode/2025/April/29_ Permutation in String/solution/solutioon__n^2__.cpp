#include <iostream>
using namespace std;

bool isFreqSame(int s1_freq[], int s2_freq[]){
    for(int i=0; i<26; i++){
        if(s1_freq[i] != s2_freq[i]){
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int s1_freq[26] = {0};
    for(int ch: s1){
        s1_freq[ch-'a']++; // count the frequency of each character
    }

    int end= s1.length()-1;
    while(end < s2.length() ){
        int s2_freq[26] = {0};
        int start= end-s1.length()+1;
        for(int i=start; i<=end;i++){
            s2_freq[s2[i]-'a']++;
        }

        if(isFreqSame(s1_freq, s2_freq)){
            return true;
        }
        end++;
    }
    return false;
}        

int main(){
    string s1 = "ab", s2 = "eidbaooo";
    bool isSubString = checkInclusion(s1, s2);
    cout<< isSubString<< endl; 

    return 0;
}
  