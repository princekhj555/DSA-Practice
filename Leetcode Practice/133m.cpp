/*133. Clone Graph*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
   unordered_map<int,Node*> umap;
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        Node* node_new = new Node(node->val);
        umap[node_new->val]=node_new;
        int n=node->neighbors.size();
        for(int i=0;i<n;i++){
            if(umap.count(node->neighbors[i]->val))
                node_new->neighbors.push_back(umap[node->neighbors[i]->val]);
            else
                node_new->neighbors.push_back(cloneGraph(node->neighbors[i]));
        }
        return node_new;
    }
};