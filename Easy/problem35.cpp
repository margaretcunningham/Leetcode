class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid=0,low=0;
        int high=nums.size()-1;
        if (target < nums[0]) {
            return 0;
        }
        if (target > nums[high]) {
            return nums.size();
        }
        while (low <= high){
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};
