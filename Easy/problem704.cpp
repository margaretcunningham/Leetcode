class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() -1;
        while (min<=max) {
            int x = (min+max)/2;
            if (nums[x] == target) return x;
            if (target < nums[x]) {
                max = x-1;
            } else {
                min = x+1;
            }
        }
        return -1;
    }
};
