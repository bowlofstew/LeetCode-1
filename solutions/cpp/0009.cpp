class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long ret = 0;
        int y = x;

        while (y) {
            ret = ret * 10 + y % 10;
            y /= 10;
        }

        return ret == x;
    }
};