class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        s = set(nums)
        maxCount = 1
        for n in s:
            if n-1 not in s: # don't go backwards counting
                current_num = n
                count = 1
                while current_num + 1 in s:
                    current_num += 1
                    count += 1
                maxCount = max(count, maxCount)
        return maxCount
