class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        minValue = 100000
        dict = {}
        l = []
        for word in list1:
            if word in list2:
                index = list1.index(word) + list2.index(word)
                minValue = min(minValue, index)
                dict[word] = index
        
        for key,val in dict.items():
            if val == minValue:
                l.append(key)
        
        return l
