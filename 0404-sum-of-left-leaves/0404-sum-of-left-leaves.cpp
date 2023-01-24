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
    int sum=0;
    int solve(TreeNode *root){
        if(root){
            if(root->left){
                if(!root->left->left && !root->left->right){
                    sum+=root->left->val;
                }
                solve(root->left);
            }
            if(root->right){
                solve(root->right);
            }
        }
        return 0;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root);
        return sum;
        
    }
};