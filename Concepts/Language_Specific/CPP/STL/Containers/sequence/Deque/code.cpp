#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void printDeque(deque<int>& de){

    cout<< " [";
    for(int val: de){
        cout << " " << val ;
    }
    cout<< " ]";
    cout << endl;
}


// size, erase, clear, begin, end, rbegin, rend, insert, front, back  all methods are available in list
int main(){
    deque<int> de; // deque :: double ended queue

    cout<< "-------------------------------------"<< endl;
    cout<< "size: " << de.size();
    // cout<< " capacity: " << de.capacity(); // there have no capacity method in deque
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.push_back(3);
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.push_back(4);
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.emplace_back(5);
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.push_front(2);
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.push_front(1);
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.pop_back();
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;
    de.pop_front();
    cout<< "size: " << de.size();
    printDeque(de);
    cout<< "-------------------------------------"<< endl;

    cout<< "value of index 2: " << de[2]<< endl; // it support it, cause deque is a dynamic array

    return 0;
}

