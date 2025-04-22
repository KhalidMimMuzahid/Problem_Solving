#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int start =i-1;
        int temp= arr[i];
        while(start >=0 && arr[start] > temp){
            arr[start+1]= arr[start];
            start--;
        }
        arr[start+1]= temp;
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
    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}