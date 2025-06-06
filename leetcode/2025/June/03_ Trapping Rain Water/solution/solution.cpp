#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

// TC= O(n)
// SC= O(n)
int trap(vector<int>& height) {
    int n= height.size();
    int ans=0;
    // left max for each element
    vector<int> lMax(n,-1);
    // right max for each element
    vector<int> rMax(n,-1);
    stack<int> s;
    // TC= O(n)
    for(int i=0; i<n; i++){
        lMax[i]= !s.empty() && (height[s.top()]>height[i])? height[s.top()]: -1 ;
        if(!s.empty() && height[i]> height[s.top()]){
            s.pop();
            s.push(i);
        }
        if(s.empty() && height[i]!=0){
            s.push(i);
        }
    }
    // TC= O(1)
    while(!s.empty()){
        s.pop();
    }
    
    // TC= O(n)
    for(int i=n-1; i>=0; i--){
        rMax[i]= !s.empty() && (height[s.top()]>height[i])? height[s.top()]: -1 ;
        if(!s.empty() && height[i]> height[s.top()]){
            s.pop();
            s.push(i);
        }
        if(s.empty() && height[i]!=0){
            s.push(i);
        }
    }

    // TC= O(n)
    for(int i=0; i<n; i++){
        if(lMax[i]!=-1 && rMax[i]!=-1){
            ans+= std::min(lMax[i], rMax[i])- height[i];
        }
    }
    return ans;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trap(height);
    cout<<ans<<endl;
    return 0;
}
 