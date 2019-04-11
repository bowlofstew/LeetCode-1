class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry == 1) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';
            ret = char(carry % 2 + '0') + ret;
            carry >>= 1;
        }

        return ret;
    }
};