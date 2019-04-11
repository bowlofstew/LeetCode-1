class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ret;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, curr, ret);
        return ret;
    }

private:
    void dfs(vector<int>& candidates, int target, int s, vector<int>& curr, vector<vector<int>>& ret) {
        if (target < 0) return;
        if (target == 0) {
            ret.push_back(curr);
            return;
        }

        for (int i = s; i < candidates.size(); i++) {
            if (i > s && candidates[i] == candidates[i - 1]) continue;
            curr.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i + 1, curr, ret);
            curr.pop_back();
        }
    }
};