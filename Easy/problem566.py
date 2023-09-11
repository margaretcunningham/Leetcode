class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        res = []
        mLength = len(mat)
        nLength = len(mat[0])
        m = 0
        n = 0
        nItems1 = mLength * nLength
        nItems2 = r * c
        if nItems1 != nItems2:
            return mat
        for i in range(0,r):
            row = []
            for j in range(0,c):
                row.append(mat[m][n])
                n+=1
                if n >= nLength:
                    n = 0
                    m+=1
                if m >= mLength:
                    res.append(row)
                    return res
            res.append(row)
        return res
                
