/*Left View of Binary Tree */

vector<int> leftView(Node *root)
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
       }sol.push_back(temp[0]);
   }
   return sol;
}