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
    long long int total=0;
    void t(TreeNode* root){
        if(root){
            total+=root->val;
            t(root->left);
            t(root->right);
        }
        return;
    }
    long long int mx=0;
    long long int pro(TreeNode* root,long long int total){
        if(!root) return 0;
        long long int l=pro(root->left,total);
        long long int r=pro(root->right,total);
        long long int sum=l+r+root->val;
        mx=max(mx,(sum*(total-sum)));
        return sum;
    }
    int maxProduct(TreeNode* root) {
        t(root);
         pro(root,total);
        return mx%1000000007;
    }
};