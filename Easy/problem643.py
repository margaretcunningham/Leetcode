class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        l = []
        if len(nums) == 1:
            return nums[0]/1

        # compute the sum of the first window
        max_sum = 0
        for i in range(0, k):
            max_sum += nums[i]

        window_sum = max_sum
        for i in range(k, len(nums)):
            window_sum += nums[i] - nums[i-k]
            max_sum = max(window_sum, max_sum)

        return max_sum / k
