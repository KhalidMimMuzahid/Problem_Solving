#include <iostream>

//  * Definition for singly-linked list.
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* shouldReverse(ListNode* temp, int k){
        int idx=0;
        ListNode* end=temp;
        while(temp !=NULL && idx!=k){
            idx++;
            end=temp;
            temp= temp->next;
        }
        return idx==k ? end: NULL;
    }

    ListNode* reverseKGroup(ListNode* start, int k) {
        ListNode* end =shouldReverse(start,k);
        if(end!=NULL){
            ListNode* nextStart=end->next;
            ListNode* cur= start;
            ListNode* next=cur->next;
            while(next != nextStart){
                ListNode* next_next=next->next;
                next->next=cur;

                cur= next;
                next= next_next;
            }
            start->next= reverseKGroup(nextStart, k );
            return end;
        }
        else{
            return start;
        }
    }
};