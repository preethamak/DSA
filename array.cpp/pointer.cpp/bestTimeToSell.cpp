#include <vector>    // For std::vector
#include <algorithm> // For std::max

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) return 0; // Edge case: no prices
        
        int buy = prices[0];
        int profit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else {
                int current = prices[i] - buy;
                profit = std::max(current, profit);
            }
        }
        
        return profit;
    }
};
