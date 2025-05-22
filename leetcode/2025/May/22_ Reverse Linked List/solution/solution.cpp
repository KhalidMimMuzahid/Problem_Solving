#include <iostream>
using namespace std;


class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next= NULL;
    }
};



class List{
    ListNode* head;
    ListNode* tail;
public:
    List(){
        head= tail= NULL;
    }
    // push back method;
    // TC= O(1)
    void push_back(int val){
        ListNode* newListNode= new ListNode(val);
        newListNode->next= NULL;
        if(head == NULL){
            head= newListNode;
        }
        else{
            tail->next= newListNode;
        }
        tail= newListNode;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
        ListNode* cur= head;
        while(cur!=NULL){
            ListNode* next= cur->next;
            cur->next= prev;
            prev= cur;
            cur= next;
        }
        this->head= prev;
        return head;
    }
    ListNode* reverse() {
        return reverseList(this->head);
    }

    // TC= O(n) // n=size
    void printLL(){
        ListNode* ListNode = head;
        while(ListNode!= NULL){
            cout<<"["<< ListNode->val<< "]"<<"->";
            ListNode=ListNode->next;
        };
        cout<<"NULL"<<endl;
    }
};

int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.printLL();
    l1.reverse();
    l1.printLL();
    
    return 0;
}