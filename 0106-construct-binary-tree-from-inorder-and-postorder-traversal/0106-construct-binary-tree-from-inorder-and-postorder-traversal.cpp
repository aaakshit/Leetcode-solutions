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
private:
    TreeNode* getTree(vector<int>& inorder, int il, int ir, 
            vector<int>& postorder, int pl, int pr,
            unordered_map<int, int> &mpi) {
        //cout<<il<<","<<ir<<"|"<<pl<<","<<pr<<endl;
        if (il>ir)
            return nullptr;
        if (il == ir)
            return new TreeNode(inorder[il]);
        int i_idx = mpi[postorder[pr]];
        int l_subtree_siz = i_idx - il - 1;
        return new TreeNode(postorder[pr], 
                getTree(inorder, il, i_idx-1, postorder, pl, pl+l_subtree_siz, mpi),
                getTree(inorder, i_idx+1, ir, postorder, pl+l_subtree_siz+1, pr-1, mpi)
        );
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mpi;
        for (int i = 0; i < inorder.size();i++)
            mpi[inorder[i]] = i;
        return getTree(inorder, 0, inorder.size()-1, postorder, 0, postorder.size() - 1, mpi);
    }
};