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

    // TC = O(n)
    void makeCycle(int pos){
        int idx=0;
        ListNode* temp = head;
        while(temp!=NULL && idx!= pos){
            if(temp->next == NULL) return;
            temp= temp->next;
            idx++;
        }
        tail->next= temp;
    }

    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* slow= head;
        ListNode* fast= head;
        bool hasCycle= false;
        while(fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast= fast->next->next;
            if(slow == fast){
                hasCycle= true;
                break;
            };
        }
        if(!hasCycle)return NULL;
        slow= head;
        // ListNode* lastNode;// for removing cycle
        while(slow != fast){
            slow= slow->next;
            // lastNode= fast; // for removing cycle, track the last node
            fast= fast->next;
        }
        // lastNode->next= NULL; // for removing cycle
        return slow;
    }

    void removeCycle(){
        ListNode* loopNode= detectCycle(head);

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
    l1.push_back(7);
    l1.push_back(8);
    l1.printLL();
    l1.makeCycle(4);
    l1.printLL();
    
    
    
    return 0;
}