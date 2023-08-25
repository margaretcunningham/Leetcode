# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        if not nums: # if nothing is present in the nums[:middle] then the recusion ends
            return None

        middle = len(nums) // 2
        head = TreeNode(nums[middle])

        head.left = self.sortedArrayToBST(nums[:middle])
        head.right = self.sortedArrayToBST(nums[middle+1:]) 

        return head
