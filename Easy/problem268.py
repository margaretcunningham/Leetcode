class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        mn = min(nums)
        mx = len(nums)
        print(mx)
        if mx not in nums:
            return mx
        for i in range(mn,mx):
            if i not in nums:
                return i
        return 0
