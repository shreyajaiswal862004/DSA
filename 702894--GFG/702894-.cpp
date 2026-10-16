class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& nums) {
        // code here
        int r=0,l=0,n=nums.size();
        int sum=0, mini=INT_MAX;
        while(r<n){
            sum+=nums[r];
            while(l<=r && sum>x){
                mini=min(mini,r-l+1);
                sum-=nums[l];
                l++;
            }
            
            r++;
        }
        return mini==INT_MAX?0:mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna