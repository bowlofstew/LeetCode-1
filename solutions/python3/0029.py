class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend == -2 ** 31 and divisor == -1:
            return 2 ** 31 - 1

        sign = -1 if (dividend > 0) ^ (divisor > 0) else 1
        ret = 0
        dividend = abs(dividend)
        divisor = abs(divisor)

        while dividend >= divisor:
            m = 1
            temp = divisor
            while temp << 1 <= dividend:
                m <<= 1
                temp <<= 1
            dividend -= temp
            ret += m

        return sign * ret