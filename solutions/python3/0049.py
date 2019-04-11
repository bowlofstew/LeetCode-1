from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ret = []
        dict = defaultdict(list)

        for str in strs:
            s = ''.join(sorted(str))
            dict[s].append(str)

        for value in dict.values():
            ret.append(value)

        return ret