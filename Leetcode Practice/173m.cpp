/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
 public:
vector<int> ans;
int i=0;
BSTIterator(TreeNode* root) {
       
    stack<TreeNode *> st;
    while(true){
        if(root != NULL)    {
            st.push(root);
            root = root->left;
        }
        else {
            if(st.size()==0) break;
            TreeNode *temp = st.top(); st.pop();
            ans.push_back(temp->val);
            root = temp->right;                                   
        }
    }
}

	int next() {
		int val = ans[i];
		i++; return val;        
	}

	bool hasNext() {
		return i< ans.size();
	}

};
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */