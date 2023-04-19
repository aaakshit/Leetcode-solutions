// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<pair<TreeNode*,int>>v;
//     int count(TreeNode* root,int d,int c){
//         if(!root)
//             return 0;
//         if(dp[{root,c}]!=-1){
//             return 
//         }
//         if(root&&d==0){
//             if(root->left){
//                 c++;
//                 return count(root->left,1,c);
//             }
//         }
//         else if(root&&d==1){
//             if(root->right){
//                 c++;
//                 return count(root->right,0,c);
//             }
//         }
        
//             return c;
        
//     }
//     int mx=INT_MIN;
//     void pre(TreeNode* root){
//         if(root){
            
//             pre(root->left);
//             pre(root->right);
//             dp[{root,mx}]=max(mx,max(count(root,0,0),count(root,1,0)));
            
//         }
//         return;
//     }
//     int longestZigZag(TreeNode* root) {
//         if(!root)
//             return 0;
//         pre(root);
//         return mx;
//     }
// };
class Solution {
public:

int max=0;
void lng(TreeNode* root,bool dir,int ln){
    if(max<ln)max=ln;
    if(dir){//dir == 1 as root direction is right
        if(root->left !=nullptr) lng(root->left,0,ln+1);//right to left increase length
        if(root->right !=nullptr)lng(root->right,1,1);//new starting point
    }
    else{//dir == 0 as root direction is left
        if(root->left !=nullptr) lng(root->left,0,1);//new starting point
        if(root->right !=nullptr)lng(root->right,1,ln+1);//left to right increase length
    }
    return ;
}
int longestZigZag(TreeNode* root) {
    if(root)lng(root, 0, 0);
    return max;
}
};