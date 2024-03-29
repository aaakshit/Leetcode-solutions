/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c=0;
    void solve(TreeNode* root,int ans){
        if(root){
            if(root->val>=ans){
                c++;
                ans=root->val;
            }
            solve(root->left,ans);
            solve(root->right,ans);
        }
        return;
    }
    int goodNodes(TreeNode* root) {
        solve(root,INT_MIN);
        return c;
    }
};