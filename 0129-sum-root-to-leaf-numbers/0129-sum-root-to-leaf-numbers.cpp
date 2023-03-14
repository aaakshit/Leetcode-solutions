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
    vector<string>v;
    int ans=0;
    // bool l(TreeNode* root){
    //     if(!root)
    //         return 0;
    //     // if(!root->left)
    //     //     return 0;
    //     // if(!root->right)
    //     //     return 0;
    //     if(!root->left && !root->right)
    //         return 0;
    //     return 1;
    // }
    void traverse(TreeNode* root,string&s){
        if(!root){
            return;
        }
        s+=to_string(root->val);
        traverse(root->left,s);
        if(!root->left && !root->right){
            cout<<s<<endl;
            v.push_back(s);
            root=NULL;
        }
        if(root)
        traverse(root->right,s);
        s.pop_back();
    }
    void tr(TreeNode* root,string&s){
        if(!root){
            return;
        }
        s+=to_string(root->val);
        tr(root->right,s);
        if(!root->left && !root->right){
            cout<<s<<endl;
            v.push_back(s);
            root=NULL;
        }
        if(root)
        tr(root->left,s);
        s.pop_back();
    }
    void tr1(TreeNode* root,string&s){
        if(!root){
            return;
        }
        s+=to_string(root->val);
        tr1(root->left,s);
        if(!root->left && !root->right){
            cout<<s<<endl;
            v.push_back(s);
            root=NULL;
        }
        if(root)
        tr1(root->right,s);
        s.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
         string s="";
        if(!root->left && !root->right)
            return root->val;
        if(!root->left){
            tr(root,s);
             long long int sum=0;
        for(auto x:v){
            if(x.size()>1)
            sum+=stoi(x);
        }
        return sum;
        }
         if(!root->right){
            tr1(root,s);
              long long int sum=0;
        for(auto x:v){
            if(x.size()>1)
            sum+=stoi(x);
        }
        return sum;
        }
       
        traverse(root,s);
        long long int sum=0;
        for(auto x:v){
            if(x.size()>1)
            sum+=stoi(x);
        }
        return sum;
    }
};