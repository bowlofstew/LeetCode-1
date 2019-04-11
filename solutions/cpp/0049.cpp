class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string, vector<string>> map;

        for (const string& str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            map[s].push_back(str);
        }

        for (const auto& i : map) {
            vector<string> s = i.second;
            sort(s.begin(), s.end());
            ret.push_back(s);
        }

        return ret;
    }
};