class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans = []
        self.dfs(nums, len(nums), 0, [], ans)
        return ans

    def dfs(self, nums: List[int], target: int, s: int, curr: List[int], ans: List[List[int]]) -> None:
        if target < 0:
            return

        ans.append(curr)

        for i in range(s, len(nums)):
            self.dfs(nums, target - 1, i + 1, curr + [nums[i]], ans)