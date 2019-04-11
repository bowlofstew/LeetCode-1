class Solution {
public:
    int myAtoi(string str) {
        long long ret = 0;
        bool isNegative = false;
        int j = 0;

        while (j < str.size() && str[j] == ' ') j++;
        if (j == str.size()) return 0;
        if (str[j] == '-') {
            isNegative = true;
            j++;
        } else if (str[j] == '+') {
            j++;
        }

        for (int i = j; i < str.size(); i++) {
            if (str[i] < '0' || str[i] > '9')
                break;
            else {
                ret = ret * 10 + (str[i] - '0');
                if (isNegative && -ret <= INT_MIN) return INT_MIN;
                if (!isNegative && ret >= INT_MAX) return INT_MAX;
            }
        }

        return isNegative ? -ret : ret;
    }
};