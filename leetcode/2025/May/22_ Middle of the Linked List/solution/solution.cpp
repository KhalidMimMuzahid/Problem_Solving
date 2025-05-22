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

    ListNode* middleNode2(ListNode* head) {
        int nodeSize=0;
        ListNode* temp= head;
        while(temp!=NULL){
            nodeSize++;
            temp=temp->next;
        }
        int idx=0, middleNodeIndex=nodeSize/2;
        while(idx != middleNodeIndex){
            head= head->next;
            idx++;
        }
        return head;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast!=NULL && fast->next != NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
    
    // TC = O(n)
    // SC = O(1)
    ListNode* middle() {
        // return middleNode2(head);
        return middleNode(head);
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
    l1.push_back(6);
    l1.printLL();
    l1.printLL();
    ListNode* middleNode= l1.middle();
    cout<< "middle: "<< middleNode->val<<endl;
    
    return 0;
}