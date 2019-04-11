class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l = 0, r = citations.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (citations[mid] == citations.size() - mid)
                return citations[mid];
            else if (citations[mid] > citations.size() - mid)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return citations.size() - (r + 1);
    }
};