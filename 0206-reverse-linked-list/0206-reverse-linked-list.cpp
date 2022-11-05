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
    ListNode* reverseList(ListNode* head) {
        if(!head)return NULL;
        ListNode *curr=head,*pre=NULL,*nxt=NULL;
        while(curr){
            pre = curr;
            curr=curr->next;
            pre->next=nxt;
            nxt=pre;
        }
        return pre;
    }
};