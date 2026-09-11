class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int l=0, r=0, n=arr.size(), sum=0, minlen=INT_MAX;
        while(r<n){
            sum+=arr[r];
            while(l<=r && sum>x){
                minlen=min(minlen,r-l+1);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return minlen==INT_MAX? 0:minlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna