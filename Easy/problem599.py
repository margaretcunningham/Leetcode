class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        dict = {}
        l = []
        for i in range(0, len(list1)):
            for j in range(0,len(list2)):
                if list1[i] == list2[j]:
                    dict[list1[i]] = i+j
        minValue = min(dict.values())
        print(minValue)
        for key, value in dict.items():
            if value == minValue:
                print(key)
                l.append(key)
        return l
