#include <iostream>
#include  <vector> 
#include <stack>
using namespace std;

// TC= O(n)
// SC= O(n)
int largestRectangleArea(vector<int>& heights) {
    int ans=0;
    int n=heights.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    stack<int> s;
    // calculate right smaller
    // TC= O(n)
    for(int i=n-1; i>=0; i--){
        while(!s.empty() && heights[s.top()] >= heights[i]){
            s.pop();
        }
        right[i]= s.empty()? n: s.top();
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    // calculate left smaller
    // TC= O(n)
    for(int i=0; i<n; i++){
        while(!s.empty() && heights[s.top()] >= heights[i]){
            s.pop();
        }
        left[i]= s.empty()? -1: s.top();
        s.push(i);
    }
    // TC= O(n)
    for(int i=0; i<n; i++){
        int width= right[i]-left[i]-1;
        int area= heights[i]* width;
        ans = std::max(ans, area);
    }
    return ans;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    int ans = largestRectangleArea(heights);
    cout<<"ans: "<<ans<<endl;
    return 0;
}
 