class Solution:
    def hammingWeight(self, n: int) -> int:
        count = 0
        return self.findOneBits(n, count)

    def findOneBits(self, n, count):
        if n < 1:
            return count
        if n % 2 == 1:
            count+=1
        return self.findOneBits(n // 2, count)    
