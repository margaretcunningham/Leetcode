class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        a=m-1 # number of the highest num1
        b=n-1 # number of num2s to insert
        write_index=m+n-1

        while(b >= 0): # while there are still numbers in b to insert
            if a>=0 and nums1[a] > nums2[b]: # if there are still numbers in nums1 and nums1[a] is more than nums[2] b
                nums1[write_index] = nums1[a] # start at the back of the array and place the number thats greater
                a-=1 # decrement the index at a
            else: # if there are no more numbers in a, or nums2[b] is greater
                nums1[write_index] = nums2[b] # place nums2 b at the back
                b-=1 # decrement b

            write_index -= 1 # change the position of the write index one to the left
