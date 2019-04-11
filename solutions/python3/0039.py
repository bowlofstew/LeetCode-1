class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ret = []
        candidates.sort()
        self.dfs(candidates, target, 0, [], ret)
        return ret

    def dfs(self, candidates: List[int], target: int, s: int, curr: List[int], ret: List[List[int]]) -> None:
        if target < 0:
            return
        if target == 0:
            ret.append(curr)
            return

        for i in range(s, len(candidates)):
            self.dfs(candidates, target - candidates[i], i, curr + [candidates[i]], ret)