class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        write_index = 1
        i = 1
        count = 1
        while i < len(nums):
            if nums[i-1] != nums[i]:
                count=0
            if count < 2:
                nums[write_index] = nums[i]
                write_index+=1
                count+=1 
            i+=1
        return write_index
