/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *res;
    void solve(TreeNode* cloned,int val){
        if(cloned){
            if(cloned->val==val){
                res=cloned;
                return;
            }
            solve(cloned->left,val);
            solve(cloned->right,val);
        }
        return;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       solve(cloned,target->val);
        return res;
    }
};