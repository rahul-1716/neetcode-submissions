class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> stringS;
        unordered_map<char, int> stringT;
        for(int i = 0; i < s.length(); i++){
            stringS[s[i]]++;
            stringT[t[i]]++;
        }
        return stringS == stringT;
    }
};
