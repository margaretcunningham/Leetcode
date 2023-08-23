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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==nullptr) return {};
        vector<int> v = {root->val};
        vector<vector<int>> ret = {v};
        vector<vector<int>> left = levelOrder(root->left);
        vector<vector<int>> right = levelOrder(root->right);
        int i = 0;
        for (i =0; i<left.size() && i<right.size();i++) {
            if (right[i].size()!=0&&left[i].size()!=0) {
                vector<int> temp = left[i];
                temp.insert(temp.end(), right[i].begin(), right[i].end());
                ret.push_back(temp);
            }
        }
        if (left.size() > right.size()) {
            ret.insert(ret.end(), left.begin()+i, left.end());
        }
        if (left.size() < right.size()) {
            ret.insert(ret.end(), right.begin()+i, right.end());
        }
        return ret;
    }
};
