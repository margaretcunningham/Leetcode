class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0
        if n == 0: 
            return True
        if (len(flowerbed) == 1):
            return not flowerbed[0]
        for i in range(0, len(flowerbed)):
            if (flowerbed[i] == 0):
                count+=1
                if i == (len(flowerbed)-1) and count == 2:
                    n-=1
                elif i < 2 and count == 2:
                    n-=1
                    count = 1
                elif count == 3:
                    n-=1
                    count = 1
                if n == 0:
                    return True
            else:
                count = 0
        return False
