class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        ret = []
        self.dfs(s, 0, 0, [""] * 4, ret)
        return ret

    def dfs(self, s: str, depth: int, index: int, curr: List[str], ret: List[str]) -> None:
        if depth == 4 and index == len(s):
            ret.append(".".join(curr))
            return
        if depth == 4 or index == len(s):
            return

        for i in range(1, 4):
            if index + i > len(s):
                return
            if i > 1 and s[index] == '0':
                return
            temp = s[index: index + i]
            if int(temp) > 255:
                return
            curr[depth] = temp
            self.dfs(s, depth + 1, index + i, curr, ret)
            curr[depth] = ""