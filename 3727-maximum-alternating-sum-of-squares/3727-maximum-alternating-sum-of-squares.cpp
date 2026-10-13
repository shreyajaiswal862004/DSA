class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        sort(nums.begin(), nums.end(), [](int a, int b ){
            return abs(a)<abs(b);
        });
        for(int i=0;i<n/2;i++){
            ans-=nums[i]*nums[i];
        }
        for(int i=n/2 ;i<n; i++){
            ans+=nums[i]*nums[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna