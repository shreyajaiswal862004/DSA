class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]<k){
                cnt++;
            }
            else break;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna