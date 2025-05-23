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
    // ListNode* head;
    // ListNode* tail;
public:
    ListNode* head;
    ListNode* tail;
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

// TC = O(m+n)
// SC = O(n) // n is height of the recursion tree (call stack)
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL && list2 ==NULL) return NULL;
    else if(list1==NULL) return list2;
    else if(list2==NULL) return list1;
    
    if(list1->val <= list2->val){
        list1->next= mergeTwoLists( list1->next, list2);
        return list1;
    }
    else{
        list2->next= mergeTwoLists( list1, list2->next);
        return list2;
    }
}

int main(){
    List list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(4);

    List list2;
    list2.push_back(1);
    list2.push_back(3);
    list2.push_back(4);

    List mergedList;
    ListNode* newHead =mergeTwoLists(list1.head, list2.head);
    mergedList.head= newHead;
    mergedList.printLL();

    return 0;
}