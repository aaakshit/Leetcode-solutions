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
    bool check(TreeNode* r1,TreeNode* r2){
      if(!r1 &&r2 || r1&&!r2)
          return 0;
      if(!r1 && !r2)
          return 1;
      if(r1 && r2 && r1->val==r2->val){
          return check(r1->left,r2->right) && check(r1->right,r2->left);
      }
        return 0;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return 1;
        // if(root->left->val!=root->right->val)
        //     return 0;
        return check(root->left,root->right);
    }
};