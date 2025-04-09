#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        bool isSwap = false; // this is for optimization
        for(int j=0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap= true;
            }
        }
        if(!isSwap){ // that means array has already been sorted
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[]= {4,1,5,2,3};
    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}