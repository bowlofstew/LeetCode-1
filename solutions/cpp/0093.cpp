class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        vector<string> curr(4);
        dfs(s, 0, 0, curr, ans);
        return ans;
    }

    void dfs(string s, int depth, int index, vector<string>& curr, vector<string>& ans) {
        if (depth == 4 && index == s.size()) {
            ans.push_back(curr[0] + "." + curr[1] + "." + curr[2] + "." + curr[3]);
            return;
        }
        if (depth == 4 || index == s.size()) return;

        for (int i = 1; i <= 3; ++i) {
            if (index + i > s.size()) return;
            if (i > 1 && s[index] == '0') return;
            string temp = s.substr(index, i);
            if (stoi(temp) > 255) return;
            curr[depth] = temp;
            dfs(s, depth + 1, index + i, curr, ans);
            curr[depth] = "";
        }
    }
};