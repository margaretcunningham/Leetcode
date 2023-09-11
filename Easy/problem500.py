class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        l1 = ['q','w','e','r','t','y','u','i','o','p']
        l2 = ['a','s','d','f','g','h','j','k','l']
        l3 = ['z','x','c','v','b','n','m']
        l=[]
        for word in words:
            flag = True
            if word[0].lower() in l1:
                row = l1
            elif word[0].lower() in l2:
                row = l2
            else:
                row = l3
            for c in word:
                if c.lower() not in row:
                    print(word, c, row)
                    flag = False
                    break
            if flag == True:
                l.append(word)
        return l
