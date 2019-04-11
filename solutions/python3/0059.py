class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        ret = [[0 for j in range(n)] for i in range(n)]
        count = 1

        for min in range(n // 2):
            max = n - min - 1
            for i in range(min, max):
                ret[min][i] = count
                count += 1
            for i in range(min, max):
                ret[i][max] = count
                count += 1
            for i in range(max, min, -1):
                ret[max][i] = count
                count += 1
            for i in range(max, min, -1):
                ret[i][min] = count
                count += 1

        if n & 1:
            ret[n // 2][n // 2] = count

        return ret