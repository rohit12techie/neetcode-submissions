class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> result_map;
        for(int i=0; i<strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            result_map[str].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for(const auto &[key, value] : result_map) {
            result.push_back(value);
        }
        
        return result;
    }
};
