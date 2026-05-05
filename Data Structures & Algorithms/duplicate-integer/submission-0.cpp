class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> unique_set;

        for(int i=0; i<nums.size(); i++) {
            cout<<"num::"<<nums[i]<<endl;
            if(!unique_set.insert(nums[i]).second) {
                return true;
            }
        }

        return false;
    }
};