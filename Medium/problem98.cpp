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
    int succ(TreeNode* root) {
        if (root->left == nullptr) return root->val;
        return succ(root->left);
    }
    int pred(TreeNode* root) {
        if (root->right == nullptr) return root->val;
        return pred(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        if (root->left == nullptr && root->right == nullptr) return true;
        if (root->left == nullptr) {
            if (root->right->val <= root->val) return false;
            if (succ(root->right) <= root->val) return false;
            return isValidBST(root->right);
        }
        if (root->right == nullptr) {
            if (root->left->val >= root->val) return false;
            if (pred(root->left) >= root->val) return false;
            return isValidBST(root->left);
        }
        if (root->left->val >= root->val || root->right->val <= root->val) return false;
        if ((pred(root->left) >= root->val) || (succ(root->right) <= root->val)) return false;
        
        return isValidBST(root->left)&&isValidBST(root->right);
    }
};