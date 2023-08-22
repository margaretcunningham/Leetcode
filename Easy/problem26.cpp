class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for (int i =0; i<nums.size();i++) {
            if (s.count(nums[i]) == 1) {
                nums.erase(nums.begin() + s.size());
                i--;
            }
            s.insert(nums[i]);
        }
        return s.size();
    }
};
