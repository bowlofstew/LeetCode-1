class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;

        int l = 0;
        int r = matrix.size() * matrix[0].size() - 1;

        while (l <= r) {
            int m = (l + r) >> 1;
            int i = m / matrix[0].size();
            int j = m % matrix[0].size();

            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] < target)
                l = m + 1;
            else
                r = m - 1;
        }

        return false;
    }
};