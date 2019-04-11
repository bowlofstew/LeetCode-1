class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        ret = []
        self.dfs(n, k, 1, [], ret)
        return ret

    def dfs(self, n: int, k: int, s: int, curr: List[int], ret: List[List[int]]) -> None:
        if k == 0:
            ret.append(curr)
            return

        for i in range(s, n + 1):
            self.dfs(n, k - 1, i + 1, curr + [i], ret)