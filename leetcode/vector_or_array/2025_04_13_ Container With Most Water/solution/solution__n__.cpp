#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= (n)


int maxArea(vector<int>& height) {
    int maxArea=0;
    int start=0, end= height.size()-1;
    while(start<end){
        int lowerLine= min(height[start], height[end]);
        int area= lowerLine* (end-start);
        maxArea=  max(maxArea, area);
        if(height[start]< height[end]){
            start++;
        }
        else{
            end--;
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
 