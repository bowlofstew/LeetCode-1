class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ret = []
        self.dfs(k, n, 1, [], ret)
        return ret

    def dfs(self, k: int, n: int, s: int, curr: List[int], ret: List[List[int]]) -> None:
        if n < 0:
            return
        if n == 0:
            if k == 0:
                ret.append(curr)
                return

        for i in range(s, 10):
            self.dfs(k - 1, n - i, i + 1, curr + [i], ret)