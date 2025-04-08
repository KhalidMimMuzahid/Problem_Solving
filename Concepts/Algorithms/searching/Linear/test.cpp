#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int t){
    for(int i = 0; i<n; i++){
        if(t == arr[i]){
            return i;
        }
    }
    return -1;
}



int main(){
    int n = 5;
    int arr[]= {4,1,5,2,3};
    int t= 2; // targeted value
    int targetindex=linearSearch(arr,n,t);
    cout<< targetindex << endl;

    return 0;
}