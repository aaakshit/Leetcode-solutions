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
    bool solve(TreeNode* root,TreeNode*&l){
        if(root==NULL)return true;
        if(!solve(root->left,l))return false;
        if(l!=NULL && l->val >=root->val)return false;
        l=root;
        return solve(root->right,l);
        
    }
    bool isValidBST(TreeNode* root) {
        TreeNode *l=NULL;
        return solve(root,l);
    }
};