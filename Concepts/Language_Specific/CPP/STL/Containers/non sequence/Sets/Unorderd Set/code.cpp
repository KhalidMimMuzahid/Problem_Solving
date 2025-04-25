#include <iostream>
#include <unordered_set>
using namespace std;



// count() erase() find() size() empty()   has also work

int main(){
    unordered_set<int> S;
    S.insert(10);// value will be in randomly placed
    S.insert(10);
    S.insert(10);
    S.insert(10);
    S.insert(1);
    S.insert(2);
    S.insert(3);// T=O(1)
    S.emplace(4);// T=O(1)
    S.insert(8);
    S.insert(6);
    S.insert(5);
    S.insert(7);
    S.insert(9);
    S.insert(13);
    S.insert(14);
    cout<<"size: "<< S.size()<< endl;

    for(int each: S){
        cout<< each<<" ";
    }
    cout<< endl;
    // lower_bound and upper_bound has not available here cause values are not sorted here
    return 0;
}

