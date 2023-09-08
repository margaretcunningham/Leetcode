class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        if len(nums)>0:
            mx1 = max(nums)
            nums = list(filter(lambda x: x!=mx1, nums))
        if len(nums)>0:
            mx = max(nums)
            nums = list(filter(lambda x: x!=mx, nums))
        if len(nums)>0:
            print(nums)
            return max(nums)
        else: 
            print(nums)
            return mx1
