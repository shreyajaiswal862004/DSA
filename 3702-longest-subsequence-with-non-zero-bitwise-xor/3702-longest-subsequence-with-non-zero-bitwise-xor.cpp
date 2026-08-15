class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int XOR=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            XOR^=nums[i];
            if(nums[i]==0){
                cnt++;
            }
        }
        if(cnt==n) return 0;
        if(XOR!=0) return n;
        return n-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna