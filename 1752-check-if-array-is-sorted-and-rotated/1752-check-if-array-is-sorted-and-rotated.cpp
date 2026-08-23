class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0, n=nums.size(), count=0;
        for(int i=0;i<n;i++){
            int next=(i+1)%n;
            if(nums[i]>nums[next]) count++;
        }
        return count<=1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna