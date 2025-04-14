#include <iostream>
using namespace std;

int search(int arr[], int start, int end, int t){
    int result=-1;

    if(start<end){
        int mid= start+ (end-start)/2;
        if(arr[mid] == t){
            return mid;
        }
        else if(arr[mid] > t){
            end= mid-1;
            result= search(arr, start, end,t );
        }
        else{
            start= mid+1;
            result=search(arr, start, end,t );
        }
    }
    return result;
}

// Time Complexity: O(n)= logn
int binarySearch(int arr[], int n, int t){
    int start=0, end= n-1;
    if(t > arr[n-1] || t< arr[0]){
        return -1;
    }
    int x= search(arr, 0, n-1,t );
    return x;
}



int main(){
    int n = 10;
    int arr[]= {1,2,3,4,5,6,7,8,9,10}; // sorted array in ascending
    int t= 8; // targeted value
    int targetindex=binarySearch(arr,n,t);
    cout<< targetindex << endl;

    return 0;
}