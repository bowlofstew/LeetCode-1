class Solution:
    def jump(self, nums: List[int]) -> int:
        ret = 0
        end = 0
        farthest = 0

        for i in range(len(nums) - 1):
            farthest = max(farthest, i + nums[i])
            if i == end:
                ret += 1
                end = farthest

        return ret