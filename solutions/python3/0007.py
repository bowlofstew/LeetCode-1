class Solution:
    def reverse(self, x: int) -> int:
        ret = 0
        sign = -1 if x < 0 else 1
        x *= sign

        while x:
            ret = ret * 10 + x % 10
            x //= 10

        if ret < -2**31 or ret > 2**31 - 1:
            return 0
        return sign * ret