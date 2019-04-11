class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret(rowIndex + 1, 1);
        for (int i = 2; i <= rowIndex; i++) {
            vector<int> temp = ret;
            for (int j = 1; j < i; j++)
                ret[j] = temp[j - 1] + temp[j];
        }
        return ret;
    }
};