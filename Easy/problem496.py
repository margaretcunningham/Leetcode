class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l=[]
        for i in range(0,len(nums1)):
            greatestFound = False
            numFound = False
            for j in range(0,len(nums2)):
                if nums1[i] == nums2[j]:
                    numFound = True
                if numFound == True and nums2[j] > nums1[i]:
                    l.append(nums2[j])
                    greatestFound = True
                    break
            if greatestFound == False:
                l.append(-1)
        
        return l
