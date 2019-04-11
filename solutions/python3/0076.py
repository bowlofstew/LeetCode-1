class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t:
            return ""

        dict_t = collections.Counter(t)
        required = len(dict_t)

        l = 0
        r = 0
        bestLeft = 0
        bestRight = 0
        windowLen = len(s) + 1

        for r in range(len(s)):
            if s[r] in dict_t:
                dict_t[s[r]] -= 1
                if dict_t[s[r]] == 0:
                    required -= 1

            while required == 0 and l <= r:
                if r - l + 1 < windowLen:
                    windowLen = r - l + 1
                    bestLeft = l
                    bestRight = r

                if s[l] in dict_t:
                    dict_t[s[l]] += 1
                    if dict_t[s[l]] > 0:
                        required += 1

                l += 1

        return "" if windowLen == len(s) + 1 else s[bestLeft: bestRight + 1]