#include <iostream>
#include <vector>
using namespace std;

int count_pair(vector<int>& arr, int count,int i, int j){
    if( i >= arr.size())return count;
    else if(j >= arr.size()){
        
        return count_pair( arr, count, i+1, i+2 );
    }

    if(arr[i]> arr[j])count++;
    return count_pair( arr, count, i, j+1 );
}

int inverse(vector<int>& arr){
    return count_pair( arr, 0, 0, 1 );
}

int main(){
    // vector<int> arr = {6,3,5,2,7};
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int inverse_count = inverse(arr);
    cout<< "inverse_count: "<< inverse_count<< endl;
}