class Solution {
public:
    bool numsub(int idx, int n, vector<int>& nums, int target, int sum) {

        if(sum>target) return false;
        
        if (idx == n) {
            return sum == target;
        }

        // Take the current element
        if (numsub(idx + 1, n, nums, target, sum + nums[idx])) {
            return true;
        }

        // Don't take the current element
        if (numsub(idx + 1, n, nums, target, sum)) {
            return true;
        }

        return false;
    }

    bool checkSubsequenceSum(vector<int>& arr, int k) {
        return numsub(0, arr.size(), arr, k, 0);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna