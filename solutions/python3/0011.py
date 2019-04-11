class Solution:
    def maxArea(self, height: List[int]) -> int:
        ret = 0
        l = 0
        r = len(height) - 1

        while l < r:
            h = min(height[l], height[r])
            ret = max(ret, (r - l) * h)
            while height[l] <= h and l < r:
                l += 1
            while height[r] <= h and l < r:
                r -= 1

        return ret