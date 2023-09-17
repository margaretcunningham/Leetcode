class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i = len(prices) -1
        maxValue = 0
        maxProfit = 0
        while i >= 0:
            if prices[i] > maxValue:
                maxValue = prices[i]
            if maxValue - prices[i] > maxProfit:
                maxProfit = maxValue - prices[i]
            i-=1
        return maxProfit
