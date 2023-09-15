class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        duplicate = sum(nums) - sum(set(nums))
        predictedSum = len(nums)* (len(nums)+1) // 2
        missing = predictedSum - sum(set(nums))
        return [duplicate, missing]
