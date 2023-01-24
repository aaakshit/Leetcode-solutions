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
    int height(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void solve(TreeNode* root,int d,int&h,int&sum){
        if(!root)
            return;
        d++;
        if(d==h){
            sum+=root->val;
        }
        solve(root->left,d,h,sum);
        solve(root->right,d,h,sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return NULL;
        int h=height(root);
        //cout<<h<<endl;
        solve(root,0,h,sum);
        return sum;
    }
};