class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        ret = [1] * (rowIndex + 1)

        for i in range(2, rowIndex + 1):
            for j in range(1, i):
                ret[i - j] += ret[i - j - 1]

        return ret