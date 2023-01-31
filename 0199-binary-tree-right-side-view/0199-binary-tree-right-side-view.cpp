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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
          int n=q.size();
            // while(n--){
            //     TreeNode* t=q.front();
            //     q.pop();
            //     int cnt=1;
            //     v.push_back(t->val);
            //     if(t->right&& cnt){
            //         q.push(t->right);
            //         cnt--;
            //     }
            //     if(t->left && cnt){
            //         q.push(t->left);
            //         cnt--;
            //     }
            for(int i=0;i<n;i++)
            {
                TreeNode* pp=q.front();
                q.pop();
                if(i==n-1)
                    v.push_back(pp->val);
                if(pp->left)
                    q.push(pp->left);
                if(pp->right)
                    q.push(pp->right);
            }
            
        }
        return v;
    }
};