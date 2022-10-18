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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return 0;
        ListNode* curr=head;
        while(curr && curr->next){
            if(curr->next->val==val){
                ListNode* t=curr->next;
                curr->next=curr->next->next;
                delete(t);
            }
            else
            curr=curr->next;
        }
        if(head->val==val){
            ListNode* t=curr->next;
            head=head->next;
            delete(t);
        }
        return head;
    }
};