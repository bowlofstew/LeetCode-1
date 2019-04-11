class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        auto it = intervals.begin();
        while (it != intervals.end() && (*it)[0] < newInterval[0]) it++;
        intervals.insert(it, newInterval);

        vector<vector<int>> ret;
        for (const auto& interval : intervals) {
            if (ret.empty() || interval[0] > ret.back()[1])
                ret.push_back(interval);
            else
                ret.back()[1] = max(ret.back()[1], interval[1]);
        }

        return ret;
    }
};