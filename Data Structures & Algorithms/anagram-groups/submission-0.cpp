class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(const auto& s : strs)
        {
            string sortStr = s;
            sort(sortStr.begin(), sortStr.end());
            res[sortStr].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& pair : res)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
