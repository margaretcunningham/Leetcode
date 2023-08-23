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
    int findDepth(TreeNode* root, int c) {
        if (root == nullptr) return c;
        c++;
        int l = findDepth(root->left, c);
        int r = findDepth(root->right, c);
        if (l>r) return l;
        return r;
        
    }
    int maxDepth(TreeNode* root) {
        return findDepth(root,0);
    }
};
