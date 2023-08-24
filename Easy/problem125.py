class Solution:
    def isPalindrome(self, s: str) -> bool:
        s= s.lower()
        s= s.replace(" ", "")
        punc_list = '''!()`-[]{};*#:'"\,<>./?@_~'''
        for i in s:
            if i in punc_list:
                s = s.replace(i, "")
        print(s)
        for i in range(0,int(len(s)/2)):
            if (s[0+i] != s[-1-i]):
                return False
        return True
