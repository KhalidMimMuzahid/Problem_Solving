#include <iostream>
#include <queue>
using namespace std;


int main(){
    priority_queue<int> pq; // highest value priority queue
    pq.push(3); // push() -> T=O(logn)
    pq.push(5);
    pq.push(4);
    pq.push(10);
    pq.emplace(8);
    cout<< "top: "<< pq.top()<< endl;
    pq.pop();  // pop() -> T=O(logn)
    cout<< "top: "<< pq.top()<< endl; // top() -> T=O(1)
    cout<< "size: " << pq.size()<<endl; 

    cout<<"isPriorityQueueEmpty: "<< pq.empty()<< endl;
    while(! pq.empty()){
        cout<< pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    priority_queue<int> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(3);
    pq2.push(4);
    cout<< "pq2 size: " << pq2.size()<<endl;

    priority_queue<int> pq3;
    pq3.push(7);
    pq3.push(8);
    pq3.push(9);
    cout<< "pq3 size: " << pq3.size()<<endl;
    
    pq3.swap(pq2);

    cout<< "pq2 size: " << pq2.size()<<endl;
    cout<< "pq3 size: " << pq3.size()<<endl;

    priority_queue<int, vector<int>, greater<int>> rpq; // reverse top  priority queue
    return 0;
}

