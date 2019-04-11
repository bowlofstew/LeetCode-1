class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ret(n, vector<int>(n));
        int count = 1;

        for (int min = 0, max = n - min - 1; min < n / 2; min++, max--) {
            for (int i = min; i < max; i++) ret[min][i] = count++;
            for (int i = min; i < max; i++) ret[i][max] = count++;
            for (int i = max; i > min; i--) ret[max][i] = count++;
            for (int i = max; i > min; i--) ret[i][min] = count++;
        }

        if (n & 1) ret[n / 2][n / 2] = count;

        return ret;
    }
};