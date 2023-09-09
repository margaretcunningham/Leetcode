class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        mx = 0
        for i in nums:
            if i == 1:
                count+=1  
            else:
                count=0
            if count > mx:
                mx = count     
        return mx
    
