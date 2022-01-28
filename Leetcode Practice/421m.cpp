/*421. Maximum XOR of Two Numbers in an Array*/


class node{
    public:
    node *left;
    node *right;
};

class Trie{
    public:
    node* root;
    Trie() {
        root=new node();
    }
    void insert(int n){
        node *cur=root;
        for(int i=30;i>=0;i--){
            int mask=1<<i;
            int bit=((mask&n)>0) ? 1 : 0;
            if(bit==0){
                if(cur->left==nullptr){
                    cur->left=new node();
                }
                cur=cur->left;
            }else{
                if(cur->right==nullptr){
                    cur->right=new node();
                }
                cur=cur->right;
            }
        }
    }
    int query(int n){
        node *cur=root;
        int ans=0;
        for(int i=30;i>=0;i--){
            int mask=1<<i;
            int bit=((mask&n)>0) ? 1 : 0;
            if(bit==0){
                if(cur->left !=NULL){
                    cur=cur->left;
                }else{
                    cur=cur->right;
                    ans|=mask;
                }
            }
            else{
                if(cur->right !=NULL){
                    cur=cur->right;
                    ans|=mask;
                }else{
                    cur=cur->left;
                    
                }
            }
        }
        return ans;
    }
    
};


class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie *trie=new Trie();
        for(int i=0;i<nums.size();i++){
            trie->insert(nums[i]);
        }
        int ma=0;
        for(int i=0;i<nums.size();i++){
            int find=INT_MAX^nums[i];
            int res=trie->query(find);
            ma=max(ma,res^nums[i]);
        }
        return ma;
    }
};