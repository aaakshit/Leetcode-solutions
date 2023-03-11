class Solution {
public:
    ListNode* middleOfLinkedList(ListNode*head,ListNode*block)
    {   
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=block&&fast->next!=block)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    TreeNode* sortedListToBST(ListNode* head,ListNode*block=nullptr) {
        if(head==block)
            return nullptr;
        if(head->next==block)
            return new TreeNode(head->val);
        
        ListNode*mid=middleOfLinkedList(head,block);
        TreeNode*root=new TreeNode(mid->val);
        
        root->left=sortedListToBST(head,mid);
        root->right=sortedListToBST(mid->next,block);
        return root;
    }
};