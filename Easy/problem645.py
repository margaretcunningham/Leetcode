class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        s = set()
        missing = -1
        duplicate = -1
        nums.sort()
        for i in range(0,len(nums)):
            if nums[i] in s:
                duplicate = nums[i]
            if i+1 not in nums:
                missing = i+1
            if duplicate > -1 and missing > -1:
                return [duplicate, missing]
            else:
                s.add(nums[i])
        return [duplicate, missing]
