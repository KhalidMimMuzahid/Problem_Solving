#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int smallestIndex = i; // first index of unsorted part
        for(int j=i+1; j< n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex= j;
            }
        }
        swap(arr[i] , arr[smallestIndex]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 6;
    int arr[]= {1,2,3,2,5,6};
    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}