class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret = 0;
        unordered_map<char, int> map;

        int i = 0;
        for (int j = 0; j < s.size(); j++) {
            char c = s[j];
            if (map.count(c)) i = max(i, map[c]);
            ret = max(ret, j - i + 1);
            map[c] = j + 1;
        }

        return ret;
    }
};