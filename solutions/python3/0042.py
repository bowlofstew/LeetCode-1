class Solution:
    def trap(self, height: List[int]) -> int:
        ret = 0
        l = 0
        r = len(height) - 1
        leftMax = 0
        rightMax = 0

        while l < r:
            if height[l] < height[r]:
                if height[l] >= leftMax:
                    leftMax = height[l]
                else:
                    ret += (leftMax - height[l])
                l += 1
            else:
                if height[r] >= rightMax:
                    rightMax = height[r]
                else:
                    ret += (rightMax - height[r])
                r -= 1

        return ret