#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> ans){
    cout<<"[";
    for(int i = 0; i<ans.size(); i++){
        if(i == ans.size()-1){
            cout << ans[i] << "";
        }
        else{
            cout << ans[i] << ",";
        }
        
    }
    cout <<"]"<< endl;
}


// TC= O(2^n * n)
// SC= O(n)
void print_subset(vector<int>& vec, vector<int>& ans, int i){
    if(i == vec.size()){
        printVector(ans);
        return;
    }

    //including value ofo index i
    ans.push_back(vec[i]);
    print_subset(vec, ans, i+1);

        ans.pop_back();// we are removing last element that has added for including 
    //excluding value ofo index i
    print_subset(vec, ans, i+1);
}


int main(){
    int n = 10;
    vector<int> ans;
    vector<int> vec= {1,2,3};
    print_subset(vec, ans, 0);
    return 0;
}