class Solution:
    def check(self, substr, s) -> bool:
        ans = True
        size = len(substr)
        if (size == 1):
            for i in range(0,len(s)):
                if (substr != s[i]):
                    ans = False
            return ans
        x = ""
        for i in range(0, int(len(s)/len(substr))):
            x = ""
            for j in range (0, size):
                x += s[j+(size*i)]
            if (x != substr) :
                ans = False
            print(ans)
        return ans
    def repeatedSubstringPattern(self, s: str) -> bool:
        if (len(s) == 1): return False
        substr = ""
        for i in range(0, int(len(s)/2)):
            substr += s[i]
            if (len(s) % len(substr) == 0):
                ans = self.check(substr, s)
                if (ans == True):
                    return True
        return False
    
