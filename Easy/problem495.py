class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        if duration == 0:
            return 0
        curr = timeSeries[0] + duration
        count = duration
        for i in range(1, len(timeSeries)):
            if timeSeries[i] < curr:
                diff = curr - timeSeries[i]
                count -= diff
                count += duration
            elif timeSeries[i] > curr:
                count += duration
            elif timeSeries[i] == curr:
                count += duration
            curr = duration + timeSeries[i]
        return count
