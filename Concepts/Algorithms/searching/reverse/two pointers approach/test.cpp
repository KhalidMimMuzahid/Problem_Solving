#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++; 
        end--;
    }
}



int main(){
    int n = 5;
    int arr[]= {4,1,5,2,3};
    reverseArray(arr,n);
    printArray(arr,n);

    return 0;
}