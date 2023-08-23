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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if (root)
            traverseTree(root, v);
        return v;
    }

    void traverseTree(TreeNode* root, vector<int> &v) {
        if (root->left) {
            traverseTree(root->left, v);
        } 
        if (root->right)
            traverseTree(root->right, v);
        v.push_back(root->val);
    }
};
