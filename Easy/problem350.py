class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l = []
        for i in range(0,len(nums1)):
            if nums1[i] in nums2:
                if l.count(nums1[i]) < nums2.count(nums1[i]):
                    l.append(nums1[i])
        return l
