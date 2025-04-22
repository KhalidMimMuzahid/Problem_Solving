#include <iostream>
#include  <vector> 
using namespace std;

bool isValid(vector<int>& nums, int maxAllowedPages, int m){
    int pages=0;
    // int maxValue =0;
    int studentCount = 1;


    for(int i=0; i< nums.size(); i++){ // O(n)
        if(nums[i] > maxAllowedPages){
            return false;
        }
        else if(studentCount > m){
            return false;
        }
        if(pages+nums[i] > maxAllowedPages){
            // maxValue= max(maxValue, pages);
            pages= nums[i]; 
            studentCount++;
        }
        else{
            pages= pages+nums[i];
            
        }
        

    }
    return studentCount > m ? false: true;
    // if( maxValue <=maxAllowedPages){
    //     return true;
    // }
    // else{
    //     return false;
    // }

}

int allocateBooks(vector<int>& nums, int m) {
    int n = nums.size()-1;

    if(m>n){
        return -1;
    }
    int ans=-1;

    int start= 0, end=0; // range for possible answer
    for(int val: nums){ // O(n)
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
    vector<int> vec= {2,1,3,4};
    int m= 2; // total student
    int num= allocateBooks(vec, m);

    cout<< num<<endl;  

    return 0;
}
 