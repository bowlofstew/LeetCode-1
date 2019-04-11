class Solution {
public:
    int hammingDistance(int x, int y) {
        int ret = 0;
        while (x || y) {
            ret += (x % 2) ^ (y % 2);
            x /= 2;
            y /= 2;
        }
        return ret;
    }
};