class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=INT_MIN;
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<mini) mini=prices[i];
            maxprofit=max(maxprofit,prices[i]-mini);
        }
        return maxprofit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna