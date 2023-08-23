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
    vector<int> out;
    vector<TreeNode*> l;
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if (!root) return out;

        if (!root->left && !root->right) {
            out.push_back(root->val);
            return out;
        }

        if (root->left) {
            l.push_back(root);
            traverseLeft(root->left);
        } else if (root->right) {
            out.push_back(root->val);
            traverseLeft(root->right);
        }
        
        return out;
    }

    void traverseLeft(TreeNode* root) {
        if (root->left) {
            l.push_back(root);
            traverseLeft(root->left);
        } else if (root->right) {
            out.push_back(root->val);
            traverseLeft(root->right);
        } else {
            out.push_back(root->val);
            if(l.size() > 0)
                traverseSub(l); // visit the parent node
        }
    }

    void traverseSub(vector<TreeNode*> &l) {

        TreeNode* prev;
        
        while (l.size() > 0) {
            prev = l.back();
            l.pop_back();
            out.push_back(prev->val);

            if (prev->right) {
                traverseLeft(prev->right);
            }
        }
    }
    
};
