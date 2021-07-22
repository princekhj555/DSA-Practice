/* 160. Intersection of Two Linked Lists */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   int getlen(ListNode *root){
        int count=0;
        while(root){
            count++;
            root=root->next;
        }
        return count;
    }
    ListNode *getNode(int d,ListNode *x,ListNode *y){
        while(d--)x=x->next;
        while(x!=NULL && y!=NULL && x!=y){
            x=x->next;
            y=y->next;
        }
        if(x==y)return x;
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *x, ListNode *y) {
        int l1=getlen(x);
        int l2=getlen(y);
        ListNode *res=NULL;
        if(l1>l2){
            int d=l1-l2;
            res=getNode(d,x,y);
        }
        else{
            int d=l2-l1;
            res=getNode(d,y,x);
        }
        return res;
    }
};