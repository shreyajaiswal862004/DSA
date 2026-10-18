class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0, cnt = 0, ans = 0, n = nums.size();
        int ways = 0;     
        while(r<n){
            if(nums[r]%2){
                cnt++;
                ways=0;
            }
            while(cnt==k){
                ways++;
                if(nums[l]%2) cnt--;
                l++;
            }
            ans+=ways;
            r++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna