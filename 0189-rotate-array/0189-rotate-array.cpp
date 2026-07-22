class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=k%nums.size();

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+n);
        reverse(nums.begin()+n, nums.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna