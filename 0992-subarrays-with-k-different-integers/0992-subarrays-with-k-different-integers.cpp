class Solution {
public:
    int subarray(vector<int>& nums, int k){
        unordered_map<int,int>mpp;
        int l=0, r=0, n=nums.size(), cnt=0;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k && l<=r){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarray(nums,k)-subarray(nums,k-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna