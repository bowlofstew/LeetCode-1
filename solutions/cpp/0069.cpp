class Solution {
public:
    int mySqrt(int x) {
        long r = x;
        while (r * r > x)
            r = (r + x / r) >> 1;
        return r;
    }
};