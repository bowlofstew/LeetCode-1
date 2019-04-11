class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> indices;
        for (int i = 0; i < list1.size(); i++) 
            indices[list1[i]] = i;

        vector<string> ret;
        int least = INT_MAX;

        for (int i = 0; i < list2.size(); i++) {
            if (!indices.count(list2[i])) continue;
            int sum = indices[list2[i]] + i;
            if (sum < least) ret.clear();
            if (sum <= least) {
                least = sum;
                ret.push_back(list2[i]);
            }
        }

        return ret;
    }
};