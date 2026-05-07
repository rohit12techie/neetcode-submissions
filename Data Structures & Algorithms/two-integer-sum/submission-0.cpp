class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> twosum_map;

        for(int i=0; i<nums.size(); i++) {
            twosum_map[nums[i]].push_back(i);
        }

        for(int i=0; i<nums.size(); i++) {
            int second_value = target - nums[i];
            auto it = twosum_map.find(second_value);
            if(it != twosum_map.end()) {
                for(int n=0; n < it->second.size(); n++) {
                    if (i != it->second[n]) {
                        return {i, it->second[n]};
                    }
                }
            }
        }
        
    }
};
