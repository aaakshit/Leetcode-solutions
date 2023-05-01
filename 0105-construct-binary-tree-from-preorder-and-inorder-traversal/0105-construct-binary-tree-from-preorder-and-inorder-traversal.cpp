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
    int curr=0;
    TreeNode* cons(vector<int>& preorder, vector<int>& inorder,int s,int e){
        if(s>e)
            return NULL;
        TreeNode* root=new TreeNode(preorder[curr]);
        curr++;
        int n;
        for(int i=0;i<=e;i++){
            if(inorder[i]==root->val){
                n=i;
                break;
            }
        }
        root->left=cons(preorder,inorder,s,n-1);
        root->right=cons(preorder,inorder,n+1,e);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return cons(preorder,inorder,0,preorder.size()-1);
    }
};