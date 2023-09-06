class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) != len(t)):
            return False
        if (len(s) == 1):
            if s == t:
                return True
        l = []
        for i in range(0, len(s)):
            l.append(s[i])
        for i in range(0,len(t)):
            if t[i] in l:
                index = l.index(t[i])
                l.pop(index)
            else:
                return False
        return True
