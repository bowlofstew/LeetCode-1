class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        for (int i = 1; i <= numRows; i++)
            ret.push_back(vector<int>(i, 1));
        
        for (int i = 0; i < numRows; i++)
            for (int j = 1; j < ret[i].size() - 1; j++)
                ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        return ret;
    }
};