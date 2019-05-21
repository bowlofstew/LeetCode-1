class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        dfs(nums, nums.size(), 0, curr, ans);
        return ans;
    }

private:
    void dfs(vector<int>& nums, int target, int s, vector<int>& curr, vector<vector<int>>& ans) {
        if (target < 0) return;

        ans.push_back(curr);

        for (int i = s; i < nums.size(); i++) {
            if (i > s && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            dfs(nums, target - 1, i + 1, curr, ans);
            curr.pop_back();
        }
    }
};