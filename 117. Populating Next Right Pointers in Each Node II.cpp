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
        auto node = root;
        while (node) {
            auto dummy = new Node;
            auto tail = dummy;
            for (auto p = node; p; p = p->next) {
                if (p->left)
                    tail = tail->next = p->left;
                
                if (p->right)
                    tail = tail->next = p->right;
            }
            node = dummy->next;
        }
        return root;
    }
};
