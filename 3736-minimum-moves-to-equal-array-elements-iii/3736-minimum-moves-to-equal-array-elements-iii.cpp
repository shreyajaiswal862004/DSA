class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            cnt+=maxi-nums[i];
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna