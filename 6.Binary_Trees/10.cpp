/*Right View of Binary Tree */

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
    vector<int> sol;
   if(!root) return sol;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int cnt=q.size();
       vector<int> temp;
       while(cnt--){
           Node* tmp=q.front();
           q.pop();
           temp.push_back(tmp->data);
           
           if(tmp->left!=NULL) q.push(tmp->left);
           if(tmp->right!=NULL) q.push(tmp->right);
       }sol.push_back(temp[temp.size()-1]);
   }
   return sol;
    }
};
