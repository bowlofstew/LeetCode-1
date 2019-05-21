class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, curr, ans);
        return ans;
    }

private:
    void dfs(vector<int>& candidates, int target, int s, vector<int>& curr, vector<vector<int>>& ans) {
        if (target < 0) return;
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = s; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i, curr, ans);
            curr.pop_back();
        }
    }
};