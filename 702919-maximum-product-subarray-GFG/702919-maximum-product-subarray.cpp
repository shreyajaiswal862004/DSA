class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int pre=1, suff=1;
        int n=arr.size();
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(pre==0) pre=1;
            if(suff==0) suff=1;
            pre=pre*arr[i];
            suff=suff*arr[n-1-i];
            
            ans=max(ans,max(pre,suff));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna