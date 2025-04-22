#include <iostream>
#include  <vector> 
using namespace std;

bool isValid(vector<int>& nums, int maxAllowedBoardUnit, int m){
    int boardUnit=0;
    int painterCount = 1;


    for(int i=0; i< nums.size(); i++){ // O(n)
        if(nums[i] > maxAllowedBoardUnit){
            return false;
        }
        else if(painterCount > m){
            return false;
        }
        if(boardUnit+nums[i] > maxAllowedBoardUnit){
            boardUnit= nums[i]; 
            painterCount++;
        }
        else{
            boardUnit= boardUnit+nums[i];   
        }
    }
    return painterCount > m ? false: true;
 

}

int partitionPainter(vector<int>& nums, int m) {
    int n = nums.size()-1;

    // if(m>n){
    //     return -1;
    // }
    int ans=-1;

    int start= INT_MIN, end; // range for possible answer

    for(int val: nums){ // O(n)
        start = max(start, val);
        end+=val;
    }

    while(start <= end){ // O(logN * n)
        int mid = start+ (end-start)/2;

        if(isValid(nums,mid, m)){
            // left to find answer
            ans= mid;
            end= mid-1;
        }
        else{
            // right to find answer
            start= mid+1;
        }
    }

    return ans;
    
}

int main(){
    vector<int> vec= {40,30,10,20};
    int p= 2; // total painter
    int num= partitionPainter(vec, p);

    cout<< num<<endl;  

    return 0;
}
 