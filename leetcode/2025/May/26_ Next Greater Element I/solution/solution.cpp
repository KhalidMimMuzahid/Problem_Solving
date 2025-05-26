#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> m;
    stack<int> s;
    for(int i=0; i<nums1.size(); i++){
        m[nums1[i]]= i;
    }
    for(int i= nums2.size()-1; i>=0; i--){
        if(s.empty()){
            if(m.find(nums2[i])!= m.end()){
                int idx= m[nums2[i]];
                nums1[idx]= -1;
            }
        }
        else{
            while(!s.empty() && nums2[i]>=s.top()){
                s.pop();
            }
            if(s.empty() ){
                if(m.find(nums2[i])!= m.end()){
                    int idx= m[nums2[i]];
                    nums1[idx]= -1;
                } 
            }
            else{
                if(m.find(nums2[i])!= m.end()){
                    int idx= m[nums2[i]];
                    nums1[idx]= s.top();
                }
            }
        }
        s.push(nums2[i]);
    }
    return nums1;
}


int main(){
    // stock prices
    vector<int> nums1 = {2,4}, nums2 = {1,2,3,4};

    vector<int> ans= nextGreaterElement(nums1, nums2);
    for(int val: ans){
        cout<<val<< " ";
    }
    cout<<endl;
    return 0;
}