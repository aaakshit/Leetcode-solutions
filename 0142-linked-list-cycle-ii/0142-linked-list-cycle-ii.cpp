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
    ListNode *detectCycle(ListNode *head) {
        if(!head)return NULL;
        ListNode *slow=head,*fast=head;
      //  if(!fast->next->next)return NULL;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                break;
            }
        }
        if(!(fast&&fast->next))
            return NULL;
        while(head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};