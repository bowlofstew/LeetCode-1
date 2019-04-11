class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        ret = 0
        y = x

        while y:
            ret = ret * 10 + y % 10
            y //= 10

        return ret == x