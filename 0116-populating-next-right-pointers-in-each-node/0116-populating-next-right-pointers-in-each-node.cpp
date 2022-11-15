/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
          //  Node *t;
            while(s>0){
                 Node *t;
            if(s>1){
                
                t=q.front();
                q.pop();
                Node *nxt=q.front();
                t->next=nxt;
            }
                else{
                    t=q.front();
                    q.pop();
                }
                if(t->left)
                    q.push(t->left);
                 if(t->right)
                    q.push(t->right);
                
                s--;
            }
        }
        return root;
    }
};