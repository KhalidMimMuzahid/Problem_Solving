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
    vector<int> lMax(n,0);
    lMax[0]= height[0];
    // right max for each element
    vector<int> rMax(n,0);
    rMax[n-1]=height[n-1];

    // TC= O(n)
    for(int i=1; i<n; i++){
        lMax[i]= std::max(height[i], lMax[i-1]);
    }
    // TC= O(n)
    for(int i=n-2; i>=0; i--){
        rMax[i]= std::max(height[i], rMax[i+1]);
    }

    // TC= O(n)
    for(int i=0; i<n; i++){
        ans+= std::min(lMax[i], rMax[i])- height[i];
    }
    return ans;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trap(height);
    cout<<ans<<endl;
    return 0;
}
 