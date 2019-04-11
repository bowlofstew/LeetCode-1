class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ret = -2 ** 31
        sum = 0

        for i in range(len(nums)):
            sum += nums[i]
            if sum > ret:
                ret = sum
            if sum < 0:
                sum = 0

        return ret