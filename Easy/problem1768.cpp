class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        if (len(word1) ==0): return word2
        if (len(word2) ==0): return word1
        ans = ""
        for i in range (0,len(word1)+len(word2)):
            if (i < len(word1)): # assure that the index is not out of range
                ans += word1[i]
            if (i < len(word2)):
                ans += word2[i]
        return ans
            
