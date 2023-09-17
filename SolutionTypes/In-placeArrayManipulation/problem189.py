class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        numsCopy = nums.copy()
        n = len(nums)
        for i in range(0,len(nums)):
            nums[(i+k) % n] = numsCopy[i]
