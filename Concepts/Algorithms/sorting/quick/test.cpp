#include <iostream>
#include  <vector> 
using namespace std;
int partition(vector<int> &arr, int start, int end){
    int pivot= arr[end];
    int idx= start-1;

    for(int j=start; j<end; j++){
        if(arr[j] < pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}


// TC= O(nlogn)
// in worst case, TC= O(n^2) , this case happens when every time pivot element is largest for ascending sort, and smallest for descending 
// SC = O(1), here we ignore the call stack memory
void quick_sort(vector<int> &arr, int start, int end){
    if( start >= end){
        return;
    }

    int pivot_index = partition(arr, start, end);

    // for left hub
    quick_sort(arr, start, pivot_index-1);
    //for right hub
    quick_sort(arr, pivot_index+1, end);

    
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
    quick_sort(arr,start, end);
    printVector(arr, arr.size());

    return 0;
}