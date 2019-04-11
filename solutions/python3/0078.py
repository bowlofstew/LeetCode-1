class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ret = []
        self.dfs(nums, len(nums), 0, [], ret)
        return ret

    def dfs(self, nums: List[int], target: int, s: int, curr: List[int], ret: List[List[int]]) -> None:
        if target < 0:
            return

        ret.append(curr)

        for i in range(s, len(nums)):
            self.dfs(nums, target - 1, i + 1, curr + [nums[i]], ret)