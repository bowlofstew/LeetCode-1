class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        dfs(nums, nums.size(), used, curr, ans);
        return ans;
    }

private:
    void dfs(vector<int>& nums, int target, vector<bool>& used, vector<int>& curr, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i] || i > 0 && used[i - 1] && nums[i] == nums[i - 1])
                continue;
            used[i] = true;
            curr.push_back(nums[i]);
            dfs(nums, target - 1, used, curr, ans);
            curr.pop_back();
            used[i] = false;
        }
    }
};