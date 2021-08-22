/*ZigZag Tree Traversal*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    vector<int> sol; int f=0;
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
       } if(f==1) {reverse(temp.begin(),temp.end()); f=0;}
         else f=1;
       for(auto i: temp) sol.push_back(i);
   }
   return sol;
}
};
