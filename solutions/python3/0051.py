class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        ret = []
        self.dfs(0, [False] * n, [False] * (2 * n - 1), [False] * (2 * n - 1), [], ret)
        return ret

    def dfs(self, y: int, cols: List[bool], diag1: List[bool], diag2: List[bool], board: List[str], ret: List[List[str]]) -> None:
        if y == len(cols):
            ret.append(board)
            return

        for x in range(len(cols)):
            if not cols[x] and not diag1[x + y] and not diag2[x - y + len(cols) - 1]:
                cols[x] = diag1[x + y] = diag2[x - y + len(cols) - 1] = True
                self.dfs(y + 1, cols, diag1, diag2, board + ['.' * x + 'Q' + '.' * (len(cols) - x - 1)], ret)
                cols[x] = diag1[x + y] = diag2[x - y + len(cols) - 1] = False