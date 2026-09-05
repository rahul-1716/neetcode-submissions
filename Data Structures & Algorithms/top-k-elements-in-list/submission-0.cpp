class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
        for(int num : nums){
            frequencyMap[num]++;
        }
        vector<pair<int, int>> arr;
        for(const auto& keyValue: frequencyMap){
            arr.push_back({keyValue.second, keyValue.first});
        }
        sort(arr.rbegin(), arr.rend());
        // here value : key pairs are sorted according to frequency
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(arr[i].second);
        }
        return result;
    }
};
