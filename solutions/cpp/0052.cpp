class Solution {
public:
    int totalNQueens(int n) {
        int ret = 0;
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n - 1, false);
        vector<bool> diag2(2 * n - 1, false);
        dfs(0, cols, diag1, diag2, ret);
        return ret;
    }

private:
    void dfs(int y, vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2, int& ret) {
        if (y == cols.size()) {
            ret++;
            return;
        }

        for (int x = 0; x < cols.size(); x++) {
            if (!cols[x] && !diag1[x + y] && !diag2[x - y + cols.size() - 1]) {
                cols[x] = diag1[x + y] = diag2[x - y + cols.size() - 1] = true;
                dfs(y + 1, cols, diag1, diag2, ret);
                cols[x] = diag1[x + y] = diag2[x - y + cols.size() - 1] = false;
            }
        }
    }
};