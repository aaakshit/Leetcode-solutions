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
    void solve(TreeNode* root,int mx,int mn, int&d){
        if(!root)
            return;
        mx=max(mx,root->val);
        mn=min(mn,root->val);
        d=max(d,mx-mn);
        solve(root->left,mx,mn,d);
        solve(root->right,mx,mn,d);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mx=root->val;
        int mn=root->val;
        int d=0;
        solve(root,mx,mn,d);
        return d;
    }
};