#include <iostream>
#include <unordered_map>
using namespace std;



// Definition for a Node.
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

// 1) traverse from head to last
// 2) for every current node search it in the map, if not found then create copyNode and insert it to the map against old-current node

//this current  node have next pointer, search nextNode in map with old_next_node, if found then point it as next pointer for this copy_current_node other-wise create a new node for next  and add to map with against old-next-node
// and do the same for random pointer
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        unordered_map<Node*, Node*> m; // <old-node, new-node>
        Node* newHead= new Node(head->val);

        m[head]= newHead;
        Node* oldTempNode= head;
        // Node* newTempNode= newHead; 
        Node* newTempNode;
        Node* newNextNode;
        Node* oldNextNode;
        Node* oldRandomNode;
        Node* newRandomNode;
        while(oldTempNode!= NULL){
            if(m.find(oldTempNode) == m.end()){
                Node* copyNode= new Node(oldTempNode->val);
                m[oldTempNode]= copyNode;
            }
            newTempNode= m[oldTempNode];


            oldNextNode= oldTempNode->next;
            if(oldNextNode== NULL){
                newTempNode->next=NULL;
            }
            else if(m.find(oldNextNode) == m.end()){
                Node* copyNextNode= new Node(oldNextNode->val);
                m[oldNextNode]= copyNextNode;
                newTempNode->next=copyNextNode;
            }
            else{
                newNextNode= m[oldNextNode];
                newTempNode->next= newNextNode;
            }


            oldRandomNode= oldTempNode->random;
            if(oldRandomNode == NULL){
                newTempNode->random= NULL;
            }
            else if(m.find(oldRandomNode) == m.end()){
                Node* copyRandomNode= new Node(oldRandomNode->val);
                m[oldRandomNode]= copyRandomNode;
                newTempNode->random= copyRandomNode;
            }
            else{
                newRandomNode= m[oldRandomNode];
                newTempNode->random= newRandomNode;
            }

            oldTempNode= oldTempNode->next;
        }

        return newHead;
    }
};