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
};
