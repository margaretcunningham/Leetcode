class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        ans = []
        if len(nums)==0:
            return ans
        if len(nums)==1:
            ans.append(str(nums[0]))
        if len(nums) == 2: # handles test case in non-ascending order [2, -1]
            if (nums[0] == nums[1]):
                ans.append(str(nums[0]))
            elif (abs(nums[1]-nums[0]) > 1):
                ans.append(str(nums[0]))
                ans.append(str(nums[1]))
            else:
                ans.append(str(nums[0]) +"->"+str(nums[1]))
            return ans
        s = ""
        a = nums[0]
        b = nums[0]
        for i in range (0, len(nums)-1):
            print(nums[i])
            if (nums[i] != nums[i+1]):
                if(nums[i+1]-nums[i] > 1):
                    if (a == b):
                        ans.append(str(a))
                        a = nums[i+1]
                        b = nums[i+1]
                        if (i+1 == len(nums)-1):
                            ans.append(str(b))
                    else:
                        ans.append(str(a) + "->" + str(b))
                        a = nums[i+1]
                        b = nums[i+1]
                        if (i+1 == len(nums)-1):
                            ans.append(str(b))
                elif(nums[i+1]-nums[i] == 1):
                    b = nums[i+1]
                    if (i+1 == len(nums)-1):
                        ans.append(str(a) + "->" + str(b))
            elif(nums[i+1]==nums[i]):
                b = nums[i]

        return ans
            
            
