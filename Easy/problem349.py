class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l = []
        for i in range(0,len(nums2)):
            if nums2[i] in nums1:
                if nums2[i] not in l:
                    l.append(nums2[i])
        return l
