#include <iostream>
#include <vector>

using namespace std;


int main(){
    // start = memory address of first element 
    // end = memory address after the last element
    // grater<int>() = comparator 

    // sort(start, end) // by default it sort in ascending order
    // sort(start, end, grater<int>()) //  sort in reverse (descending) order
    
    int arr[5]= {5,2,3,4,1};
    sort(arr, arr+5); // sort in ascending
    cout<< "ascending: ";
    for(int val: arr){
        cout<< val<< " ";
    }
    cout<< endl;
    sort(arr, arr+5, greater<int>()); // sort in descending
    cout<< "descending: ";
    for(int val: arr){
        cout<< val<< " ";
    }
    cout<< endl;


    vector<int> nums= {5,2,3,4,1};
    sort(nums.begin(), nums.end()); // sort in ascending
    cout<< "ascending: ";
    for(int val: nums){
        cout<< val<< " ";
    }
    cout<< endl;

    sort(nums.begin(), nums.end(), greater<int>()); // sort in descending
    cout<< "descending: ";
    for(int val: nums){
        cout<< val<< " ";
    }
    cout<< endl;


    vector<pair<int,int>> vec= {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec.begin(), vec.end()); // sort in ascending (sort by first value)
    cout<< "ascending: ";
    for(auto val: vec){
        cout<< "{" <<val.first<< ", "<< val.second<< "} ";
    }
    cout<< endl;

    // sort by second value using custom comparator 

    return 0;
}