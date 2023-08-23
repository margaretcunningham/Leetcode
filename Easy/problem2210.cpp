class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count =0;
        for (int i= 1; i < nums.size()-1; i++) {
            if (nums[i] < nums[i-1]) {
                for (int j = i+1; j < nums.size(); j++) {
                    if (nums[i] != nums[j]) {
                        if (nums[j] > nums[i])
                            count++;
                        break;
                    }
                }
            } else if (nums[i] > nums[i-1]) {
                for (int j = i+1; j < nums.size(); j++) {
                    if (nums[i] != nums[j]) {
                        if (nums[j]<nums[i])
                            count++;
                        break;
                    }  
                }
            }
        }
        return count;
    }
};
