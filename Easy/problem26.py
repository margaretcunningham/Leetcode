class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        write_index = 0
        i = 0
        s = set()
        while i < len(nums):
            if nums[i] not in s:
                nums[write_index] = nums[i]
                s.add(nums[write_index]) # track the number of unique elements
                write_index +=1
            i+=1
        return len(s)
