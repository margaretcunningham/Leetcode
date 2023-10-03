class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        ans = 0
        for i in range(0,len(nums)):
            for j in range(1, len(nums)):
                for k in range(2, len(nums)):
                    if i < j and j < k and i < k:
                        ans = max((nums[i]-nums[j])*nums[k], ans)
        return ans
