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

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        traverseTree(v,root);
        return v;
    }

    void traverseTree(vector<int>& v, TreeNode* root) {
        if (!root) return;
        v.push_back(root->val);
        traverseTree(v,root->left);
        traverseTree(v,root->right);
    }
};
