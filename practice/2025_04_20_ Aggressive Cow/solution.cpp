#include <iostream>
#include  <vector> 
#include <cmath>
using namespace std;

bool isValid(vector<int>& nums, int maxAllowedDistance, int c){
 
    int distance=0;
    // nums[1]- nums[0]
    int cowCount = 1;

    for(int i=1; i< nums.size(); i++){ // O(n)
        int distanceOfLastIndex =  (nums[i]- nums[i-1]);
        // if(distance > maxAllowedDistance){
        //     return false;
        // }
        // if(cowCount > c){
        //     return false;
        // }
        // else 
        if((distance+ distanceOfLastIndex) >= maxAllowedDistance){
            distance= 0;
            // distanceOfLastIndex; 
            cowCount++;
        }
        else{
            distance= distance+ distanceOfLastIndex;   
        }
    }
    cout << "______________________" << endl;
    cout << "maxAllowedDistance: "<< maxAllowedDistance<< "  ";
    cout << "cowCount: "<< cowCount<< endl;
    // cout << "______________________" << endl;
    return cowCount >= c ? true: false;
 

}

int largestMinimumDistance(vector<int>& nums, int c) {

    std::sort(nums.begin(), nums.end());
    // for(int value: nums){
    //     cout<< value<< endl;
    // }
    int n = nums.size();

    if(c>n){
        return -1;
    }
    int ans=-1;

    int lowest= INT_MAX, firstPosition= INT_MAX, lastPosition= INT_MIN;

    for(int i=0; i<n;i++){ // O(n)
        if(i != n-1){
            int dif = abs(nums[i]- nums[i+1]);
            lowest= min(lowest, dif);
        }
        firstPosition= min(firstPosition, nums[i]);
        lastPosition= max(lastPosition, nums[i]);
    }

    // cout << "last: "<< lastPosition<< "  "<< "first: " << firstPosition<< endl;
    int start= lowest, end= lastPosition-firstPosition; // range for possible answer
    // cout<< "start: " << start<< "\nend: "<< end << endl;

    while(start <= end){ // O(logN * n)
        int mid = start+ (end-start)/2;
        // cout << "mid: "<< mid<< "  ";
        if(isValid(nums,mid, c)){
            // right to find answer
            ans= mid;
            start= mid+1;
            
        }
        else{
            // left to find answer
            end= mid-1;
        }
    }

    return ans;
    
}

int main(){
    vector<int> vec= {1,2,8,4,9};
    //  {1,3,10,17,23,30,35};
    // {1,2,8,4,9};
    int c= 2; // total cows
    int num= largestMinimumDistance(vec, c);

    cout << endl << "answer: " << num<<endl;  

    return 0;
}
 