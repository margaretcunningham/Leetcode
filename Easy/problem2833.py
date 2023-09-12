class Solution:
    def furthestDistanceFromOrigin(self, moves: str) -> int:
        dist = 0
        countR = moves.count('R')
        countL = moves.count('L')
        countN = moves.count('_')
        if countR + countN > countL + countN:
            print('R')
            return countR + countN - countL
        print('L')
        return countL + countN - countR
