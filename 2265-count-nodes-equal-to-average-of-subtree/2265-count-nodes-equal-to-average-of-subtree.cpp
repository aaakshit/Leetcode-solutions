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
    int count=0;
    int cnt(TreeNode* root){
        if(!root)
            return 0;
        return 1+cnt(root->left)+cnt(root->right);
    }
    int ss(TreeNode* root){
        if(!root)
            return 0;
        return ss(root->left)+ss(root->right)+root->val;
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root)
            return 0;
        if(ss(root)/cnt(root)==root->val)
            count++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return count;
        
    }
};