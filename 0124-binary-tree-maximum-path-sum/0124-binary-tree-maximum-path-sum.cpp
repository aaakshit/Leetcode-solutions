class Solution {
public:
    int subTreesum(TreeNode* root,int& mx)
    {
        if(root==NULL) return 0;

        int l = max(0,subTreesum(root->left,mx));
        int r = max(0,subTreesum(root->right,mx));

        int curr = root->val+l+r;                             // curr node + left node + right node (path sum for curr node)
     //   cout<<curr<<" ";

        mx = max(mx,curr);                                    // took max out of all

        return root->val+max(l,r);                            // max(l,r) means we will chose one path that will gave max path sum to us
    }
    int maxPathSum(TreeNode* root) 
    {
        int mx = INT_MIN;
        subTreesum(root,mx);
        return mx;
    }
};