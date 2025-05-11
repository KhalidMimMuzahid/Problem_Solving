#include <iostream>
using namespace std;



bool is_sorted2(int arr[], int n){
    if(n==1)return true;
    else if(!(arr[n-1]>= arr[n-2]))return false;
    else return is_sorted2(arr,  n-1);
}

bool is_sorted(int arr[], int n){
    if(n==1)return true;
    else return (arr[n-1]>= arr[n-2]) && (is_sorted(arr,  n-1));
}


int main(){
    int n = 10;
    int arr[]= {1,2,3,4,5,6,6,7,8,9};
    cout<< "is sortted: "<< is_sorted(arr,n)<< endl;

    return 0;
}