class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums) == 1:
            return True
        jumps = nums[0] # track the number of jumps the first takes
        for i in range(len(nums)-1):
            print(nums[i], jumps)
            if nums[i] > jumps:
                jumps = nums[i] # choose the one with the greater number of jumps
            jumps -= 1 # take one jump
            if jumps < 0: 
                return False
        return True
