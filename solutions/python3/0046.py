class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ret = []
        self.dfs(nums, len(nums), [False] * len(nums), [], ret)
        return ret

    def dfs(self, nums: List[int], target: int, used: List[bool], curr: List[int], ret: List[List[int]]) -> None:
        if target == 0:
            ret.append(curr)
            return

        for i in range(len(nums)):
            if used[i]:
                continue
            used[i] = True
            self.dfs(nums, target - 1, used, curr + [nums[i]], ret)
            used[i] = False