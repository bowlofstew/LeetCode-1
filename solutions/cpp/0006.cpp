class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> rows(numRows);
        int direction = (numRows == 1) - 1;
        int k = 0;

        for (const char& c : s) {
            rows[k].push_back(c);
            if (k == 0 || k == numRows - 1)
                direction *= -1;
            k += direction;
        }

        string ret(s);
        k = 0;

        for (int i = 0; i < numRows; i++)
            for (int j = 0; j < rows[i].size(); j++)
                ret[k++] = rows[i][j];

        return ret;
    }
};