#include <iostream>
using namespace std;


string reverseWords(string s) {
    reverse(s.begin(), s.end());
    int i=0;
    while(s[i] !='\0'){
        // cout<<s<<endl;
        if(s[i] == ' '){
            i++;
            continue;
        }
        int j;
        for(j=i; s[j]!= '\0' && s[j]!=' '; j++ ){
            // cout<<"s[j]=["<<s[j]<<"]" << endl;
        }
        // cout<<"i="<< i<<" j="<<j<<endl;
        reverse(s.begin()+i, s.begin()+j);
        i=j;
    }

    int k=0;
    bool duplicateSpace= false;
    while(s[k]!='\0'){
        // cout<< "k="<<k<<"::: s[k]= ["<<s[k]<<"]"<<"::: s= ["<< s<< "]"<<endl;
        if(s[k] == ' '){
            if(duplicateSpace){
                s.erase(k,1);
            }
            else{
                duplicateSpace= true;
                k++;
            }
            continue;
        }
        duplicateSpace= false;
        k++;
    }
    if(s[0]==' ') s.erase(0,1);
    if(s[s.size()-1] ==' ') s.erase(s.size()-1,1);
    return s;
}

int main(){
    string s = "     the     sky is blue     ";
    // "  the sky  ";
    string reversedString = reverseWords(s);
    // cout<< "reversedString: ["<< reversedString<< "]" << endl; 

    return 0;
}
  