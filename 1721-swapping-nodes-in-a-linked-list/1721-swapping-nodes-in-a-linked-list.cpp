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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head,*q=head;
        int c=0;
        while(p){
            p=p->next;
            c++;
        }
        p=head;int i=0;
        while(p && i<k-1){
            p=p->next;
            i++;
        } i=0;
        while(q&&i<c-k){
            q=q->next;
            i++;
        }
        swap(p->val,q->val);
        return head;
    }
};