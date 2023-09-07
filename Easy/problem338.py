class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = []
        if n == 0:
            ans.append(0)
            return ans
        if n == 1:
            ans.append(0)
            ans.append(1)
            return ans
        ans = [0,1]
        for i in range(2,n+1):
            ans.append(self.binaryDivision(i))
        return ans
    
    def binaryDivision(self, decimalNumber)->int:
        binaryList = []
        x = decimalNumber
        while(x > 0):
            binaryList.append(x % 2)
            x = x // 2 # looking for floor
        return binaryList.count(1)
        
