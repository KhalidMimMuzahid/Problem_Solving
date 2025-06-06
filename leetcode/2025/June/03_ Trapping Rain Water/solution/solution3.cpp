#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

// TC= O(n)
// SC= O(1)
int trap(vector<int>& height) {
    int n= height.size();
    int ans=0;
    int l=0, r=n-1;
    int lMax= 0;
    int rMax=0;

    // TC= O(n)
    while(l<r){
        lMax= std::max(lMax,height[l]);
        rMax= std::max(rMax,height[r]);

        if(lMax<rMax){
            //lMax
            ans+= (lMax-height[l]);
            l++;
        }
        else{
            //rMax
            ans+= (rMax-height[r]);
            r--;
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
 