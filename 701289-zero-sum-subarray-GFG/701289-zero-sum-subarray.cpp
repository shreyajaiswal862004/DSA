class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        // code here
        unordered_map<int,int>mpp;
        int sum=0;
        mpp[0]++;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(mpp.find(sum)!=mpp.end()){
                return true;
            }
            mpp[sum]++;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna