class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int maxlen=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            freq[nums[j]]++;

            while(freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna