class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        unordered_set<long> set;
        for (int i = 0; i < nums.size(); i++) {
            if (i > k)
                set.erase(nums[i - k - 1]);
            for (auto num : set)
                if (abs(num - nums[i]) <= t)
                    return true;
            set.insert(nums[i]);
        }
        return false;
    }
};