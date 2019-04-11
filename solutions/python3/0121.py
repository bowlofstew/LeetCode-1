class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = 2**31 - 1
        ret = 0

        for i in range(len(prices)):
            minPrice = min(minPrice, prices[i])
            ret = max(ret, prices[i] - minPrice)

        return ret