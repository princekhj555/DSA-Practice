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


//************************************************************************************************************//


class Solution {
public:
   
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode *it1=headA;
       ListNode *it2=headB;
        while(it1!=it2){
            it1=it1->next;
            it2=it2->next;
            
            if(it1==it2) return it1;
            if(it1==NULL) it1=headB;
            if(it2==NULL) it2=headA;
        }
        return it1;
    }
};