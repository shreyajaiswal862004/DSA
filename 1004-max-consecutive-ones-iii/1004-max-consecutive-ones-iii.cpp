class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros=0, n=nums.size(), i=0, maxcount=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0) zeros++;
            while(zeros>k){
                if(nums[i]==0) zeros--;
                i++;
            }
            maxcount=max(maxcount,j-i+1);
        }
        return maxcount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna