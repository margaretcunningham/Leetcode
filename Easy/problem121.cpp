class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = prices[0];
        int diff = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
                max = prices[i];
            }
            if (prices[i] > max) {
                max = prices[i];
            }
            if (max-min>diff) {
                diff = max - min;
            }
        }
    
        return diff;
    }
};
