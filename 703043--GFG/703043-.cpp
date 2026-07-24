class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        int sum=0, maxlen=0;
        mpp[0]=-1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[rem]);
            }
            if (mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        return maxlen;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna