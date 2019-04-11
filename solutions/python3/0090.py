class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ret = []
        nums.sort()
        self.dfs(nums, len(nums), 0, [], ret)
        return ret

    def dfs(self, nums: List[int], target: int, s: int, curr: List[int], ret: List[List[int]]) -> None:
        if target < 0:
            return

        ret.append(curr)

        for i in range(s, len(nums)):
            if i > s and nums[i] == nums[i - 1]:
                continue
            self.dfs(nums, target - 1, i + 1, curr + [nums[i]], ret)