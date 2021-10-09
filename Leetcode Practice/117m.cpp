/*117. Populating Next Right Pointers in Each Node II*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *prev = nullptr;
        queue<Node*> q1, q2;
        if(root) q1.push(root);
        while(!q1.empty()) {
            while(!q1.empty()) {
                auto c = q1.front();
                q1.pop();
                c->next = prev;
                prev = c;
                if (c->right) q2.push(c->right);
                if (c->left) q2.push(c->left);
            }
            prev = nullptr;
            swap(q1, q2);
        }
        return root;
    }
};