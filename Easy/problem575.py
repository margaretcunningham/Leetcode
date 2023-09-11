class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        s = set() # provide the number of types of candies
        for candy in candyType:
            s.add(candy)
        x = len(candyType) / 2 # number of candies Alice can eat
        if len(s) > x:
            return int(x)
        else:
            return int(len(s))
