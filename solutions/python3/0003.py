class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ret = 0
        map = {}

        i = 0
        for j in range(len(s)):
            c = s[j]
            if c in map:
                i = max(i, map[c])
            ret = max(ret, j - i + 1)
            map[c] = j + 1

        return ret