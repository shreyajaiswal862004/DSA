class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;

        for (int x : nums) {
            if (x < k) {
                ans++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna