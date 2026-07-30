class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>mpp;
        int sum=0, maxlen=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum==0) maxlen=max(maxlen,i+1);
            else if(mpp.find(sum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna