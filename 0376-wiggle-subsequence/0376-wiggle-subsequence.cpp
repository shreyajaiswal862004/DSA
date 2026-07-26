class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int ans=1;
        int diff;
        int prevdiff=0;

        for(int i=1;i<nums.size();i++){
            diff=nums[i]-nums[i-1];
            if(diff>0 && prevdiff<=0 || diff<0 && prevdiff>=0){
                ans++;
                prevdiff=diff;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna