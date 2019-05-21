class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret(rowIndex + 1, 1);

        for (int i = 2; i < rowIndex + 1; i++)
            for (int j = 1; j < i; j++)
                ret[i - j] += ret[i - j - 1];

        return ret;
    }
};