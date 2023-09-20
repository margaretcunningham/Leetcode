class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        i = len(s)-1
        res = ""
        if len(s) == 1: 
            print(1)
            return len(s)

        while i >= 0:
            if s[i] == ' ':
                print(2)
                i-=1
            else:
                break
        
        while i>=0:
            if s[i] == ' ':
                print(3)
                break
            else:
                print(4)
                res += s[i]
                i-=1
        
        if i == 0:
            if len(res) == 0:
                return len(s[0])

        return len(res)
