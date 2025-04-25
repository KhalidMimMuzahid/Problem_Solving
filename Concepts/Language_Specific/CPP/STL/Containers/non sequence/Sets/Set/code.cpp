#include <iostream>
#include <set>
using namespace std;



// count() erase() find() size() empty()   has also work

int main(){
    set<int> S;
    S.insert(10);// each value is unique and in ascending sorted order
    S.insert(10);
    S.insert(10);
    S.insert(10);
    S.insert(1);
    S.insert(2);
    S.insert(3);// T=O(logn)
    S.emplace(4);
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

    cout << "lower bound of 10: " << *(S.lower_bound(10))<< endl; // lower_bound return the memory address of the value >=10 (if found 10 then return 10, otherwise search for 11,12,13,14 or more but not less than 10)
    cout << "lower bound 11: " << *(S.lower_bound(11))<< endl;
    cout << "lower bound 15: " << *(S.lower_bound(15))<< endl;// it not found then return the address of s.end()


    cout << "upper bound of 10: " << *(S.upper_bound(10))<< endl; // upper_bound return the memory address of the value >10 (if found 11 then return 11, otherwise search for 12,13,14 or more but not less than 11)
    cout << "upper bound 15: " << *(S.upper_bound(15))<< endl;// it not found then return the address of s.end()


    return 0;
}

