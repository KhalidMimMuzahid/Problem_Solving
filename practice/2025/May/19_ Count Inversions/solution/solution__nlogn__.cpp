#include <iostream>
#include <vector>
using namespace std;

// TC = O(n)
int merge(vector<int> &arr, int start, int mid, int end){
    int i=start, j=mid+1;
    vector <int> tempArr;
    int count=0;

    while(i<=mid && j<=end){
        if(arr[i]< arr[j]){
            tempArr.push_back(arr[i]);
            i++;
        }
        else{
            tempArr.push_back(arr[j]);
            j++;
            count+= (mid-i+1);
        }
    }

    while(i<= mid){ // if remaining element in left hub array, then element pushing to tempArr
        tempArr.push_back(arr[i]);
        i++;
    }
    while(j<= end){ // if remaining element in right hub array, then element pushing to tempArr
        tempArr.push_back(arr[j]);
        j++;
    }

    for(int i=0; i< tempArr.size(); i++){
        arr[start+i] = tempArr[i];
    }
    return count;
}

// Time Complexity= O(nlogn)
// Space Complexity = O(n) // n is because of the temp array in merge function
int mergeSort(vector<int> &arr,int count, int start, int end){
    if(start<end){
        int mid = start+ (end-start)/2;
        int count_left_inv= mergeSort(arr, 0, start, mid); // for left hub
        int count_right_inv= mergeSort(arr, 0, mid+1, end); // for right hub
 
        int count_current_inv= merge(arr, start, mid, end);  // TC = O(n)

        return count_left_inv+ count_right_inv+ count_current_inv;
    }
    return 0;
}

int inverse(vector<int>& arr){
    int start =0, end=arr.size()-1;
    
    return mergeSort(arr, 0, start, end);
}

int main(){
    // vector<int> arr = {6,3,5,2,7};
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int inverse_count = inverse(arr);
    cout<< "inverse_count: "<< inverse_count<< endl;
}