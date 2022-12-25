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
    int countNodes(TreeNode* root) {
        if(!root)return 0;
        if(!root->left)return 1;
        int n1=0,n2=0;
        TreeNode* p1=root,*p2=root;
        while(p1){
            n1++;
            p1=p1->left;
        }
        while(p2){
            n2++;
            p2=p2->right;
        }
        if(n1==n2)return pow(2,n1)-1;
        
        return countNodes(root->left)+countNodes(root->right)+1;
        
    }
};