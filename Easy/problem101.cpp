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
     TreeNode* invert(TreeNode* root) {
         if (root==nullptr) return root;
         TreeNode* temp = root->left;
         root->left = root->right;
         root->right = temp;
         root->left = invert(root->left);
         root->right = invert(root->right);
         return root;
     }
    
     bool isSameTree(TreeNode* p, TreeNode* q) {
        TreeNode *w, *x, *y, *z;
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr && q != nullptr) return false;
        if (p != nullptr && q == nullptr) return false;
        if (p->val != q->val) {
            return false;
        } else {
            w = p->right;
            x = q->right;
            y = p->left;
            z = q->left;
            if (!(isSameTree(w,x))) return false;
            if (!(isSameTree(y,z))) return false;
        }
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        TreeNode *a, *b;
        if (root == nullptr) return true;
        if (root->right == nullptr && root->left == nullptr) return true;
        if (root->right != nullptr && root->left == nullptr) return false;
        if (root->right == nullptr && root->left != nullptr) return false;
        TreeNode* right = invert(root->right);
        TreeNode* left = root->left;
        return isSameTree(right, left);
    }
};
