class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        write_index = len(nums) - 1
        count = 0
        n = nums.count(val)
        for i in range(0, len(nums)-n):
            if nums[i] == val:
                while nums[write_index] == val:
                    write_index-=1
                    if write_index < 0:
                        return len(nums) - n
                temp = nums[write_index]
                nums[write_index] = val
                nums[i] = temp
                write_index -= 1
        return len(nums) - n
