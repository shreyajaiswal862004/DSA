class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum=0, n=arr.size(), maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            if(sum<0) sum=0;
            sum+=arr[i];
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna