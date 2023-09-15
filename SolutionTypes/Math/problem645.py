class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        duplicate = sum(nums) - sum(set(nums)) # the duplicate number can be found by subtracting the sum of nums by the sum of the set of nums. this is because the number duplicated disappears when place in a set
        predictedSum = len(nums)* (len(nums)+1) // 2 # the predictedSum is what numbers 1 to n should add up to if there were no duplicates
        missing = predictedSum - sum(set(nums)) # the missing number is the predicted sum subtracted by the sum of the set of nums because it will show the number that it will take to add to get the predictedSum
        return [duplicate, missing]
