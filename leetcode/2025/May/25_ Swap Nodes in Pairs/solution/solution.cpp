#include <iostream>


//  * Definition for singly-linked list.
struct ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:

    ListNode* helper(ListNode* first, ListNode* second){
        if(first==NULL || second==NULL) return first;
        ListNode* nextFirstPair= second->next;
        second->next= first;
        if(nextFirstPair != NULL){
            first->next= helper(nextFirstPair, nextFirstPair->next);
        }
        else{
            first->next= NULL;
        }
        return second;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head== NULL)return NULL;
        return helper(head, head->next);
    }


};