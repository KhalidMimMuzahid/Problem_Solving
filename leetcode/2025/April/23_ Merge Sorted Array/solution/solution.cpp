#include <iostream>
#include  <vector> 
using namespace std;

void printVector(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

// TC => O(m+n), SC=> O(1)
void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
    int i= m-1, j=n-1, index=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i] >= nums2[j]){
            nums1[index--] = nums1[i--];
        }
        else{
            nums1[index--] = nums2[j--];
        }
    }


    // if any remaining nums2 element has not placed
    while(j>=0){
        nums1[index--] = nums2[j--];
    }
    // nums1 element has already been placed cause nums1 has already all element place from zero index
}



int main(){
    vector<int> nums1 = {1,2,3,0,0,0},  nums2 = {2,5,6};
    int m = 3, n = 3 ;

    mergeSortedArray(nums1, m, nums2, n);
    printVector(nums1);

    return 0;
}
  