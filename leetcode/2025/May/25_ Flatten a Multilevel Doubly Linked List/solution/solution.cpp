#include <iostream>
#include <unordered_map>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* helper(Node* current){
        Node* nextNode= current->next;
        Node* lastNode = current;
        if(current != NULL && current->child != NULL){
            current->next= current->child;
            current->next->prev= current;
            lastNode=helper(current->next);
            current->child= NULL; // remove child link
            if(nextNode != NULL){
                lastNode->next= nextNode;
                nextNode->prev= lastNode;
            }
        }
        if(current != NULL && nextNode != NULL){
            return helper(nextNode);
        }
        return lastNode;
    }
    Node* flatten(Node* head) {
        if(head == NULL) return head;
        Node* tail= helper(head);
        tail->next= NULL;
        return head;
    }
};