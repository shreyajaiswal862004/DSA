class Solution {
public:
    int countElements(vector<int>& nums) {
        int m=*min_element(nums.begin(),nums.end());
        int M=*max_element(nums.begin(),nums.end());

        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m && nums[i]<M) cnt++;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna