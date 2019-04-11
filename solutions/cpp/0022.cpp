class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        helper("", n, n, ret);
        return ret;
    }

private:
    void helper(string str, int l, int r, vector<string>& ret) {
        if (l == 0 && r == 0) ret.push_back(str);
        if (l > 0) helper(str + '(', l - 1, r, ret);
        if (l < r) helper(str + ')', l, r - 1, ret);
    }
};