#include <iostream>
#include  <vector> 
using namespace std;

// TC = O(n)
void merge(vector<int> &arr, int start, int mid, int end){
    int i=start, j=mid+1;
    vector <int> tempArr;

    while(i<=mid && j<=end){
        if(arr[i]< arr[j]){
            tempArr.push_back(arr[i]);
            i++;
        }
        else{
            tempArr.push_back(arr[j]);
            j++;
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

}

// Time Complexity= O(nlogn)
// Space Complexity = O(n) // n is because of the temp array in merge function
void mergeSort(vector<int> &arr, int start, int end){
    if(start<end){
        int mid = start+ (end-start)/2;
        mergeSort(arr, start, mid); // for left hub
        mergeSort(arr, mid+1, end); // for right hub
 
        merge(arr, start, mid, end);  // TC = O(n)
    }
}

void printVector(vector<int> arr, int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    vector<int> arr= {-2,1,-3,4,-1,2,1,-5,4};
    int start=0, end=arr.size()-1;
    mergeSort(arr,start, end);
    printVector(arr, arr.size());

    return 0;
}