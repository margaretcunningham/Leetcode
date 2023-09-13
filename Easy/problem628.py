class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
 
        x1 = nums[-1] * nums[len(nums)-2] * nums[len(nums)-3]
        x2 = nums[0] * nums[1] * nums[-1]
        if x1>x2:
            return x1
        return x2
