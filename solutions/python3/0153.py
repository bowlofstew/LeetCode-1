class Solution:
    def findMin(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        l = 0
        r = len(nums) - 1

        if nums[r] > nums[0]:
            return nums[0]

        while l <= r:
            m = (l + r) >> 1
            if nums[m] > nums[m + 1]:
                return nums[m + 1]
            if nums[m] < nums[m - 1]:
                return nums[m]
            if nums[m] > nums[0]:
                l = m + 1
            else:
                r = m - 1

        return -1
