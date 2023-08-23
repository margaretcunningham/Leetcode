class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        set<int> sn;
        for (int i = 0; i < nums.size(); i++) {
            if (s.count(nums[i]) == 0) {
                s.insert(nums[i]);
                sn.insert(nums[i]);
            } else {
                sn.erase(nums[i]);
            }
        }

        auto it = sn.begin();

        return *it;
    }
};
