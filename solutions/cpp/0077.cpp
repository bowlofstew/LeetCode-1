class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ret;
        vector<int> curr;
        dfs(n, k, 1, curr, ret);
        return ret;
    }

private:
    void dfs(int n, int k, int s, vector<int>& curr, vector<vector<int>>& ret) {
        if (k == 0) {
            ret.push_back(curr);
            return;
        }

        for (int i = s; i <= n; i++) {
            curr.push_back(i);
            dfs(n, k - 1, i + 1, curr, ret);
            curr.pop_back();
        }
    }
};