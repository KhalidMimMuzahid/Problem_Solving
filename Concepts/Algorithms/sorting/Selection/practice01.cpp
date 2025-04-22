#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++ ){
        int lowestIndex=i;
        for(int j= i; j<n; j++){
            if(arr[j] < arr[lowestIndex]){
                lowestIndex= j;
            }
        }
        swap(arr[lowestIndex], arr[i]);
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