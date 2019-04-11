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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> ret;
        deque<TreeNode*> dq;
        dq.push_back(root);
        bool leftToRight = true;

        while (!dq.empty()) {
            vector<int> currLevel;
            int currLevelSize = dq.size();
            for (int i = 0; i < currLevelSize; i++) {
                if (leftToRight) {
                    TreeNode* node = dq.front();
                    dq.pop_front();
                    currLevel.push_back(node->val);
                    if (node->left) dq.push_back(node->left);
                    if (node->right) dq.push_back(node->right);
                } else {
                    TreeNode* node = dq.back();
                    dq.pop_back();
                    currLevel.push_back(node->val);
                    if (node->right) dq.push_front(node->right);
                    if (node->left) dq.push_front(node->left);
                }
            }
            ret.push_back(currLevel);
            leftToRight = !leftToRight;
        }

        return ret;
    }
};