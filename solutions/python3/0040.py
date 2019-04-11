class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
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
            if i > s and candidates[i] == candidates[i - 1]:
                continue
            self.dfs(candidates, target - candidates[i], i + 1, curr + [candidates[i]], ret)