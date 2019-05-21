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
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            ans++;
            int qSize = q.size();
            for (int i = 0; i < qSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (!node->left && !node->right) return ans;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }

        return -1;
    }
};