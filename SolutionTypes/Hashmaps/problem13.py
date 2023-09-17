class Solution:
    def romanToInt(self, s: str) -> int:
        m = {}
        m['I'] = 1
        m['V'] = 5
        m['X'] = 10
        m['L'] = 50
        m['C'] = 100
        m['D'] = 500
        m['M'] = 1000

        res = 0
        i = len(s)-1
        while i >=0:
            addend = m[s[i]]
            if i-1 >= 0:
                if m[s[i-1]] == 1:
                    if m[s[i]] == 5 or m[s[i]] == 10:
                        addend -= 1
                        i-=1
                elif m[s[i-1]] == 10:
                    if m[s[i]] == 50 or m[s[i]] == 100:
                        addend -= 10
                        i-=1
                elif m[s[i-1]] == 100:
                    if m[s[i]] == 500 or m[s[i]] == 1000:
                        addend -= 100
                        i-=1
            res+=addend
            print(addend)
            i-=1

        return res
