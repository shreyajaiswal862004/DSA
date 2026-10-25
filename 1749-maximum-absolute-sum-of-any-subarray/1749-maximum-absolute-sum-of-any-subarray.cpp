class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minprefix=nums[0];
        int maxiprefix=nums[0];
        int ans=abs(nums[0]);

        for(int i=1;i<nums.size();i++){
            minprefix=min(nums[i],minprefix+nums[i]);
            maxiprefix=max(nums[i],maxiprefix+nums[i]);

            ans=max(ans,max(maxiprefix, abs(minprefix)));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna