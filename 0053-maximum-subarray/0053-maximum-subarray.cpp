class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxsum=INT_MIN;
        int r=0,l=0,n=nums.size();

        while(r<n){
            sum+=nums[r];
            maxsum=max(maxsum,sum);
            while(l<=r && sum<0){
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return maxsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna