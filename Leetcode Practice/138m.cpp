/*138. Copy List with Random Pointer*/

/*
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
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * newHead=new Node(0);
        Node *curr=newHead;
        map<Node*,Node*>oldNewPointer;
        int index=0;
        while(curr && head){
            curr->next=new Node(head->val);
            curr->next->random=head->random;

            oldNewPointer[head]=curr->next;
            curr=curr->next;
            head=head->next;
        }
        Node * temp=newHead->next;
        while(temp){
            if(temp->random!=NULL)
               temp->random=oldNewPointer[temp->random];
            temp=temp->next;
            
        }
        return newHead->next;
    }
};