class Solution:
    def generateParenthesis(self, n):
        ret = []
        self.helper('', n, n, ret)
        return ret

    def helper(self, str, l, r, ret):
        if l == 0 and r == 0:
            ret.append(str)
        if l > 0:
            self.helper(str + '(', l - 1, r, ret)
        if l < r:
            self.helper(str + ')', l, r - 1, ret)