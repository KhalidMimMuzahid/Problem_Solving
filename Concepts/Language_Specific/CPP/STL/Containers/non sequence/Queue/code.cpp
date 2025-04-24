#include <iostream>
#include <queue>
using namespace std;



int main(){
    queue<int> q; // LIFO
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    cout<< "front: "<< q.front()<< endl;
    q.pop();
    cout<< "front: "<< q.front()<< endl;
    cout<< "size: " << q.size()<<endl;

    cout<<"isQueueEmpty: "<< q.empty()<< endl;
    while(! q.empty()){
        cout<< q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    queue<int> q2;
    q2.push(1);
    q2.push(2);
    q2.push(3);
    q2.push(4);
    cout<< "s2 size: " << q2.size()<<endl;

    queue<int> q3;
    q3.push(7);
    q3.push(8);
    q3.push(9);
    cout<< "q3 size: " << q3.size()<<endl;
    
    q3.swap(q2);

    cout<< "q2 size: " << q2.size()<<endl;
    cout<< "q3 size: " << q3.size()<<endl;

    return 0;
}

