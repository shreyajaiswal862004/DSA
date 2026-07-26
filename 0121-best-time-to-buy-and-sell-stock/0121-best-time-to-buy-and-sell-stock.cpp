class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxprofit=max(maxprofit,prices[i]-mini);
        }
        return maxprofit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna