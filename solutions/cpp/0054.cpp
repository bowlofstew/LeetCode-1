class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        const int m = matrix.size();
        if (m == 0) return {};
        const int n = matrix[0].size();

        vector<int> ret(m * n);
        int count = 0;
        int direction = 0;

        int up = 0;
        int down = m - 1;
        int left = 0;
        int right = n - 1;

        while (true) {
            if (up > down || right < left) return ret;

            if (direction == 0) {
                for (int i = left; i <= right; i++)
                    ret[count++] = matrix[up][i];
                up++;
            } else if (direction == 1) {
                for (int i = up; i <= down; i++)
                    ret[count++] = matrix[i][right];
                right--;
            } else if (direction == 2) {
                for (int i = right; i >= left; i--)
                    ret[count++] = matrix[down][i];
                down--;
            } else {
                for (int i = down; i >= up; i--)
                    ret[count++] = matrix[i][left];
                left++;
            }

            direction = (direction + 1) % 4;
        }

        return ret;
    }
};