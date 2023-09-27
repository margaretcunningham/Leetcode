class Solution:
    def hIndex(self, citations: List[int]) -> int:
        if len(citations) == 1:
            if citations[0] > 0:
                return 1
            else:
                return 0
        citations.sort()
        hIndex = 0
        for i in range(0, len(citations)):
            x = len(citations) - i
            if x >= citations[i]:
                hIndex = max(citations[i], hIndex)
            else:
                hIndex = max(x, hIndex)
    
        return hIndex
