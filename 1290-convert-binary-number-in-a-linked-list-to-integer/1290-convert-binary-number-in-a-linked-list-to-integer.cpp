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
    int getDecimalValue(ListNode* head) {
        vector<int>v;
        int sum=0;
        if(!head)return 0;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            sum+=pow(2,i)*v[i];
        }
        return sum;
    }
};