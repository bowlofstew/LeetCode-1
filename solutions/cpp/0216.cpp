class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(k, n, 1, curr, ans);
        return ans;
    }

    void dfs(int k, int n, int s, vector<int>& curr, vector<vector<int>>& ans) {
        if (n < 0) return;
        if (n == 0) {
            if (k == 0) ans.push_back(curr);
            return;
        }

        for (int i = s; i <= 9; i++) {
            curr.push_back(i);
            dfs(k - 1, n - i, i + 1, curr, ans);
            curr.pop_back();
        }
    }
};