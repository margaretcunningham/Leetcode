class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target && i != j) {
                    s.push_back(i);
                    s.push_back(j);
                    return s;
                }
            }
        }
        return s;
    }
};
