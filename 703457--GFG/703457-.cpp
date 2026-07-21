class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        
        vector<int>temp{mini,maxi};
        return temp;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna