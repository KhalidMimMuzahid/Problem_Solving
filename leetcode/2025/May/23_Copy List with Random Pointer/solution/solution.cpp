#include <iostream>
#include <unordered_map>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        unordered_map<Node*, Node*> m; // <old-node, new-node>
        Node* newHead= new Node(head->val);
        m[head]= newHead;
        Node* oldTempNode= head->next;
        Node* newTempNode= newHead;
        while(oldTempNode!= NULL){
            Node* copy= new Node(oldTempNode->val);
            newTempNode->next= copy;
            newTempNode= newTempNode->next;
            m[oldTempNode]= newTempNode;
            oldTempNode= oldTempNode->next;
        }
        newTempNode->next= NULL;

        oldTempNode= head;
        newTempNode= newHead;
        while(oldTempNode != NULL){
            Node* oldRandomNode= oldTempNode->random;
            if(m.find(oldRandomNode) != m.end()){
                Node* newRandomNode= m[oldRandomNode];
                newTempNode->random= newRandomNode;
            }
            else{
                newTempNode->random= NULL;
            }

            oldTempNode= oldTempNode->next;
            newTempNode= newTempNode->next;
        }
        return newHead;
    }
};