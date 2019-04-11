class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ret = INT_MIN;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > ret) ret = sum;
            if (sum < 0) sum = 0;
        }

        return ret;
    }
};