class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;  // next position for non-zero
        
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna