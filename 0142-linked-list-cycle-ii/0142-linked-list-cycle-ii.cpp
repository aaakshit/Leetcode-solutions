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
        if(!head)
            return NULL;
           ListNode *slow=head,*fast=head;
        //ListNode *l=new ListNode(-1);
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(!fast or !fast->next)
            return NULL;
        while(head!=slow){
            slow=slow->next;
            head=head->next;
        }
        return slow;
    }
};