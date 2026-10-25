class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=0, r=0, n=nums.size(), sum=0, maxi=INT_MIN;

        while(r<n){
            sum+=nums[r];
            maxi=max(sum,maxi);

            while(l<=r && sum<0){
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna