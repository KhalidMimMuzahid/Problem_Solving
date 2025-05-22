#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next= NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head= tail= NULL;
    }
    // push front method
    // TC= O(1)
    void push_front(int val){
        // Node newNode(val); // static
        Node* newNode= new Node(val); // dynamic
        if(head == NULL){
            // (*newNode).next= NULL; 
            newNode->next= NULL;
            tail= newNode;
        }
        else{
            newNode->next= head;
        }
        head= newNode;
    }

    // pop_front
    // TC= O(1)
    void pop_front(){
        Node* temp= head;
        if(head == NULL)return;
        else if(head == tail){
            head= tail= NULL;
        }
        else{
            head= head->next;
        }
        delete temp;
    }

    // push back method;
    // TC= O(1)
    void push_back(int val){
        Node* newNode= new Node(val);
        newNode->next= NULL;
        if(head == NULL){
            head= newNode;
        }
        else{
            tail->next= newNode;
        }
        tail= newNode;
    }

    // pop_back
    // TC= O(n) // n=size
    void pop_back(){
        Node* temp= tail;
        if(tail == NULL)return;
        else if(head == tail){
            head= tail= NULL;
        }
        else{
            Node* node = head;
            while(node->next != tail){
                node=node->next;
            };
            node->next= NULL;
            tail= node;
        }
        delete temp;
    }

    // insert
    // TC= O(n) // n=size
    void insert(int val, int pos){
        if(pos<0)return;
        else if(pos ==0){
            push_front(val);
            return;
        }
        Node* temp= head;
        int idx=0; // 
        while(temp!=NULL){
            if(idx == pos-1){
                Node* newNode= new Node(val);
                newNode->next= temp->next;
                temp->next= newNode;
                break;
            }
            temp= temp->next;
            idx++;
        }
        // cout<<"idx: "<<idx<<" pos: "<<pos<<endl;
        if(temp == tail && idx ==pos) push_back(val);
    }

    //search
    // TC= O(n) // n=size
    int find(int val){
        int idx=0;
        Node* node= head;
        while(node!=NULL){
            if(node->data == val){
                return idx;
            }
            node= node->next;
            idx++;
        }
        return -1;
    }

    //reverse
    // TC= O(n) // n=size
    void reverse() {
        Node* prev= NULL;
        Node* cur= head;
        while(cur!=NULL){
            Node* next= cur->next;
            cur->next= prev;
            prev= cur;
            cur= next;
        }
        head= prev;
    }
    // size methods
    // TC= O(n) // n=size
    int size(){
        int count=0;
        Node* node = head;
        while(node!= NULL){
            count++;
            node=node->next;
        };
        return count;
    }

    // TC= O(n) // n=size
    void printLL(){
        Node* node = head;
        while(node!= NULL){
            cout<<"["<< node->data<< "]"<<"->";
            node=node->next;
        };
        cout<<"NULL"<<endl;
    }
};

int main(){
    List l1;
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    cout<< "size: "<< l1.size()<<endl;
    l1.printLL();

    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(8);
    l1.insert(6,5);
    l1.insert(0,0);
    l1.insert(9,9);
    // l1.insert(10,122);
    l1.printLL();
    l1.reverse();
    l1.printLL();
    cout<<"has found: "<< l1.find(8)<< endl;

    l1.pop_front();
    l1.pop_front();
    l1.pop_front();
    l1.pop_front();
    cout<< "size: "<< l1.size()<<endl;
    l1.printLL();

    l1.pop_back();
    l1.pop_back();
    l1.pop_back();
    l1.pop_back();
    cout<< "size: "<< l1.size()<<endl;
    l1.printLL();
    return 0;
}