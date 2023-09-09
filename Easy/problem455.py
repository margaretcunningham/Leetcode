class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        count = 0
        g.sort()
        s.sort()
        for i in range(0, len(g)):
            for j in range(0, len(s)):
                if s[j] >= g[i]:
                    g[i] = j
                    s.pop(j)
                    count+=1
                    break
        return count
                
