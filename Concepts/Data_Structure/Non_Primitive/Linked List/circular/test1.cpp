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

class CircularList{
    Node* head;
    Node* tail;
public:
    CircularList(){
        head= tail= NULL;
    }
    // push front method
    // TC= O(1)
    void push_front(int val){
        // Node newNode(val); // static
        Node* newNode= new Node(val); // dynamic
        if(head == NULL){
            tail= newNode;
        }
        else{
            newNode->next= head;
        }
        head= newNode;
        tail->next= head;
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
            tail->next= head;
        }
        delete temp;
    }

    // push back method;
    // TC= O(1)
    void push_back(int val){
        Node* newNode= new Node(val);
        
        if(head == NULL){
            head= newNode;
            // newNode->next= head;
        }
        else{
            tail->next= newNode;
        }
        tail= newNode;
        tail->next=head;
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
            tail= node;
            tail->next= head;
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
        do{
            if(idx == pos-1){
                Node* newNode= new Node(val);
                newNode->next= temp->next;
                temp->next= newNode;
                break;
            }
            temp= temp->next;
            idx++;
        }while(temp->next!=head);
        // cout<<"idx: "<<idx<<" pos: "<<pos<<endl;
        if(temp == tail && idx ==pos-1) push_back(val);
    }

    //search
    // TC= O(n) // n=size
    int find(int val){
        if(head != NULL && head->data == val) return 0;
        int idx=1;
        Node* node= head->next;
        while(node!=head){
            if(node->data == val){
                return idx;
            }
            node= node->next;
            idx++;
        }
        return -1;
    }


    // size methods
    // TC= O(n) // n=size
    int size(){
        Node* node = head;
        if(head==NULL)return 0;
        int count=1;
        node=node->next;
        while(node!= head){
            count++;
            node=node->next;
        };
        return count;
    }

    // TC= O(n) // n=size
    void printLL(){
        Node* node = head;
        cout<<"["<< node->data<< "]"<<"->";
        node= node->next;
        while(node!= head){
            cout<<"["<< node->data<< "]"<<"->";
            node=node->next;
        };
        cout<<"["<< node->data<< "]"<<endl; // this is duplicated value (head); cause head has already printed in first
    }
};

int main(){
    CircularList l1;
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.printLL();
    l1.pop_front();
    l1.printLL();

    l1.push_back(6);
    l1.push_back(7);
    l1.push_back(9);
    l1.printLL();
    l1.pop_back();
    l1.printLL();

    l1.insert(5,5);
    l1.printLL();

    cout<<"size: "<< l1.size()<<endl;
    cout<< "has Found: "<< l1.find(5)<<endl;
    return 0;
}