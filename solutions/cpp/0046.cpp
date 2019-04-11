class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        vector<int> curr;
        vector<bool> used(nums.size(), false);
        dfs(nums, nums.size(), used, curr, ret);
        return ret;
    }

private:
    void dfs(vector<int>& nums, int target, vector<bool>& used, vector<int>& curr, vector<vector<int>>& ret) {
        if (target == 0) {
            ret.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            curr.push_back(nums[i]);
            dfs(nums, target - 1, used, curr, ret);
            curr.pop_back();
            used[i] = false;
        }
    }
};