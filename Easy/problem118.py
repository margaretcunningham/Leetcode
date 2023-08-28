class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l_in = [1]
        l = []
        l.append(l_in)
        if numRows == 1: return l
        if numRows > 1:
            l_in = [1,1]
            l.append(l_in)
        i = 2
        while i < numRows:
            prevRow = l[-1]
            l_in = [1]
            for j in range(0,len(prevRow)-1):
                sum = prevRow[j] + prevRow[j+1]
                l_in.append(sum)
            l_in.append(1)
            l.append(l_in)
            i+=1
        return l
