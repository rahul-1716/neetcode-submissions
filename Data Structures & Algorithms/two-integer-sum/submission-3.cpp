class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> PAIR;

        for (int i = 0; i < nums.size(); i++) {
            PAIR.push_back({nums[i], i});
        }
        sort(PAIR.begin(), PAIR.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int curr = PAIR[i].first + PAIR[j].first;
            if (curr == target) {
                return {
                    min(PAIR[i].second, PAIR[j].second), max(PAIR[i].second, PAIR[j].second)
                };
            } else if (curr < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};
