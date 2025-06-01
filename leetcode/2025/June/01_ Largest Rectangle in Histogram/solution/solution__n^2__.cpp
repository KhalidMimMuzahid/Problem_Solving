#include <iostream>
#include  <vector> 
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int ans=INT_MIN;
    for(int i=0; i<heights.size(); i++){
        int maxArea= INT_MIN;
        int tempArea=0;
        for(int j=0; j<heights.size(); j++){
            if(heights[j]<heights[i]){
                tempArea=0;
            }
            else{
                tempArea+= heights[i];
            }
            maxArea= std::max(maxArea, tempArea);
        }
        ans= std::max(ans, maxArea);
    }
    return ans;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    int ans = largestRectangleArea(heights);
    cout<<"ans: "<<ans<<endl;
    return 0;
}
 