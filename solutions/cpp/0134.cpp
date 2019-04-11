class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ret = 0;
        int net = 0, sum = 0;
        for (int i = 0; i < gas.size(); i++) {
            sum += gas[i] - cost[i];
            net += gas[i] - cost[i];
            if (sum < 0) {
                sum = 0;
                ret = i + 1;
            }
        }
        return (net < 0) ? -1 : ret;
    }
};