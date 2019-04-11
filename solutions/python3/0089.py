class Solution:
    def grayCode(self, n: int) -> List[int]:
        ret = [0]

        for i in range(n):
            for j in range(len(ret) - 1, -1, -1):
                ret.append(ret[j] | 1 << i)

        return ret