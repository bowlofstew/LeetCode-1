class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(n, k, 1, curr, ans);
        return ans;
    }

private:
    void dfs(int n, int k, int s, vector<int>& curr, vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = s; i <= n; i++) {
            curr.push_back(i);
            dfs(n, k - 1, i + 1, curr, ans);
            curr.pop_back();
        }
    }
};