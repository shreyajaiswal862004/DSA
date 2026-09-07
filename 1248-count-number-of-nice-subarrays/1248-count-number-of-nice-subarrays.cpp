class Solution {
public:
    int subarray(vector<int>& nums, int k){
        int sum=0; 
        int cnt=0, n=nums.size();
        int l=0, r=0;
        while(r<n){
            sum+=(nums[r]%2);
            while(sum>k && l<=r){
                sum-=(nums[l]%2);
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return subarray(nums,k)-subarray(nums,k-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna