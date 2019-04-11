class Solution:
    def romanToInt(self, s: str) -> int:
        ret = 0
        map = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
               'C': 100, 'D': 500, 'M': 1000}

        for i in range(len(s) - 1):
            if map[s[i]] < map[s[i + 1]]:
                ret -= map[s[i]]
            else:
                ret += map[s[i]]

        return ret + map[s[-1]]