#include <iostream>
#include <vector>
#include <list>
using namespace std;

void printList(list<int>& li){

    cout<< " [";
    for(int val: li){
        cout << " " << val ;
    }
    cout<< " ]";
    cout << endl;
}

// size, erase, clear, begin, end, rbegin, rend, insert, front, back  all methods are available in list
int main(){
    list<int> li; // list is like doubly LinkedList 
    cout<< "-------------------------------------"<< endl;
    cout<< "size: " << li.size();
    // cout<< " capacity: " << li.capacity(); // there have no capacity method in list
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.push_back(3);
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.push_back(4);
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.emplace_back(5);
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.push_front(2);
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.push_front(1);
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.pop_back();
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;
    li.pop_front();
    cout<< "size: " << li.size();
    printList(li);
    cout<< "-------------------------------------"<< endl;


    //cout<< "value of index 2: " << de[2]<< endl; // it doesn't support it, cause deque isnot  a dynamic array


    return 0;
}

