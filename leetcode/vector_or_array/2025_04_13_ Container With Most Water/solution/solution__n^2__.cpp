#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= (n^2)


int maxArea(vector<int>& height) {
    int maxArea=0;
    for(int i=1; i <height.size(); i++ ){
        for(int j=0; j<i; j++ ){
            int lowerLine= min(height[i], height[j]);
            int area= lowerLine* (i-j);
            maxArea=  max(maxArea, area);
        }
    }
    return maxArea;
}

int main(){
    vector<int> height= {1,8,6,2,5,4,8,3,7};
    int ans= maxArea(height);
    cout<<ans<< endl;
    return 0;
}
 