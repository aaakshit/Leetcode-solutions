/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* root){
        ListNode *p=root,*q=NULL,*t=NULL;
        while(p){
            q=p;
            p=p->next;
            q->next=t;
            t=q;
        }
        return t;
    }
    int pairSum(ListNode* head) {
        ListNode *p=head,*q=head,*slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        while(p && p->next!=slow)
            p=p->next;
        // cout<<slow->val<<" ";
        p->next=reverse(slow);
        int mx=0;
        p=p->next;
        while(q && p){
            // cout<<q->val<<" ";
            mx=max(mx,p->val+q->val);
            p=p->next;
            q=q->next;
        }
        return mx;
    }
};