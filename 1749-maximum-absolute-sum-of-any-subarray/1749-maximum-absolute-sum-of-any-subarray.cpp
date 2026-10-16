class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans=0;
        int minprefix=0, maxprefix=0;
        for(int i=0;i<nums.size();i++){
            minprefix=min(0,minprefix+nums[i]);
            maxprefix=max(0,maxprefix+nums[i]);
            ans=max(ans, max(abs(minprefix),maxprefix));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna