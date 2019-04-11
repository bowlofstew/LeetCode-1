class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ret;
        vector<int> curr;
        dfs(nums, nums.size(), 0, curr, ret);
        return ret;
    }

private:
    void dfs(vector<int>& nums, int target, int s, vector<int>& curr, vector<vector<int>>& ret) {
        if (target < 0) return;

        ret.push_back(curr);

        for (int i = s; i < nums.size(); i++) {
            curr.push_back(nums[i]);
            dfs(nums, target - 1, i + 1, curr, ret);
            curr.pop_back();
        }
    }
};