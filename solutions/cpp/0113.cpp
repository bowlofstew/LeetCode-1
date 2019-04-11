/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ret;
        vector<int> curr;
        dfs(root, sum, curr, ret);
        return ret;
    }

private:
    void dfs(TreeNode* root, int sum, vector<int>& curr, vector<vector<int>>& ret) {
        if (!root) return;
        if (sum == root->val && !root->left && !root->right) {
            curr.push_back(root->val);
            ret.push_back(curr);
            curr.pop_back();
            return;
        }

        curr.push_back(root->val);
        dfs(root->left, sum - root->val, curr, ret);
        dfs(root->right, sum - root->val, curr, ret);
        curr.pop_back();
    }
};