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
    unordered_map<int,int>m;
    int solve(TreeNode* root){
        if(!root)
            return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        int sum=l+r+root->val;
        m[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        if(!root)
            return {0};
        solve(root);
        vector<int>ans;
        int mx=0;
        for(auto x:m){
            mx=max(mx,x.second);
        }
        for(auto x:m){
           if(x.second==mx)
               ans.push_back(x.first);
        }
        return ans;
            
    }
};