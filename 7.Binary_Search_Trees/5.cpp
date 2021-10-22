//Check for BST

class Solution
{
    public:
     int prev=INT_MIN;
    bool isBST(Node* root) 
    { if(!root)
           return true;
       if(isBST(root->left)==false) 
           return  false;
       if(root->data <= prev)  
           return false;
       prev=root->data;
       return isBST(root->right);
    }
};
