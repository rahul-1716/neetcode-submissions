class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(const auto& s : strs){
            string sortedString = s;
            sort(sortedString.begin(),sortedString.end());
            res[sortedString].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& value : res){
            result.push_back(value.second);
        }
        return result;
    }
};
