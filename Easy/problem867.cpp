class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
        }
        int rightSum = sum;
        int leftSum = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            if (leftSum == rightSum) {
                return i;
            } else {
                rightSum -= nums[i+1];
                leftSum += nums[i];
            }
        }
        if (leftSum == rightSum) {
                return nums.size() -1;
        }
        return -1;
    }
};
