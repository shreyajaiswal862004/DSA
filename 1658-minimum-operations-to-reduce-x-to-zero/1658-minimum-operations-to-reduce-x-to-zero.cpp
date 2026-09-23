class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int total = 0;
        
        for(int num : nums) {
            total += num;
        }
        
        int target = total - x;
        
        // If target is negative, impossible
        if(target < 0) {
            return -1;
        }
        
        // If target is 0, we have to remove everything
        if(target == 0) {
            return nums.size();
        }
        
        int left = 0;
        int sum = 0;
        int maxLen = -1;
        
        for(int right = 0; right < nums.size(); right++) {
            
            sum += nums[right];
            
            while(sum > target && left <= right) {
                sum -= nums[left];
                left++;
            }
            
            if(sum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }
        
        if(maxLen == -1) {
            return -1;
        }
        
        return nums.size() - maxLen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna