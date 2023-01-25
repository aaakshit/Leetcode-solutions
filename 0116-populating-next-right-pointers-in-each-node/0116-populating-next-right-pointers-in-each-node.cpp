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
        Node* curr=root;
        while(curr){
            Node *t=curr;
            while(t){
                if(t->left){
                    t->left->next=t->right;
                }
                if(t->right && t->next){
                    t->right->next=t->next->left;
                }
                t=t->next;
            }
            curr=curr->left;
        }
        return root;
    }
};