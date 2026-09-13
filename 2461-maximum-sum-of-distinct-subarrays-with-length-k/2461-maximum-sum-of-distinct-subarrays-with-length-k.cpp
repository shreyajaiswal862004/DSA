class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0, r=0, n=nums.size();
        long long sum=0, maxsum=0;
        unordered_map<int,int>mpp;
        while(r<n){
            sum+=nums[r];
            mpp[nums[r]]++;

            if(l<r && r-l+1>k){
                sum-=nums[l];
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()==k){
                maxsum=max(maxsum,sum);
            }
            r++;
        }
        return maxsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna