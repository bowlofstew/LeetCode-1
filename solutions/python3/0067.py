class Solution:
    def addBinary(self, a: str, b: str) -> str:
        ret = ''
        carry = 0
        i = len(a) - 1
        j = len(b) - 1

        while i >= 0 or j >= 0 or carry == 1:
            if i >= 0:
                carry += ord(a[i]) - ord('0')
                i -= 1
            if j >= 0:
                carry += ord(b[j]) - ord('0')
                j -= 1
            ret = chr(carry % 2 + ord('0')) + ret
            carry >>= 1

        return ret