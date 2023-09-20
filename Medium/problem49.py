class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        m = defaultdict(list) # initialize a hashmap of lists

        for word in strs:
            print(tuple(sorted(word))) # sort the word
            m[tuple(sorted(word))].append(word) # add the unsorted word to the list in the map

        l = []
        for key in m: # iterate through the keys in the map
            l.append(m[key]) # add the value to a list

        return l
