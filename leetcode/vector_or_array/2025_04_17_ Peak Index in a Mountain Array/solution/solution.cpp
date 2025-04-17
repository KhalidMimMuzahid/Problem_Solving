#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= logn
int peakIndexInMountainArray(vector<int>& arr){
    int start=0, end= arr.size()-1;


    while(start <= end){
        int mid = start+ (end-start)/2;

        if(arr[mid+1] > arr[mid]){
            start=mid+1;
        }
        else if(arr[mid-1] > arr[mid]){
            end= mid-1;
        }
        else{
            return mid;
        }

    }

    return -1;

}

int main(){
    vector<int> nums= {0,10,5,2}; // sorted array
  
    int peakIndex=peakIndexInMountainArray(nums);
    cout<< peakIndex << endl;

    return 0;
}
 