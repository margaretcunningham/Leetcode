/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if (root==nullptr) return {};
        vector<int> v = {root->val};
        for(int i =0; i<root->children.size();i++) {
            vector<int> temp = preorder(root->children[i]);
            v.insert(v.end(), temp.begin(), temp.end());
        }
        return v;
    }
};
