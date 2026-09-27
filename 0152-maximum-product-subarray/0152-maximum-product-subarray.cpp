class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        vector<int>suffix(n,1);
        vector<int>prefix(n,1);
        vector<int>ans(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            if(prefix[i-1]==0) prefix[i]=nums[i];
            else prefix[i]=prefix[i-1]*nums[i];
        }

        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(suffix[i+1]==0) suffix[i]=nums[i];
            else suffix[i]=suffix[i+1]*nums[i];
        }

        for(int i=0;i<n;i++){
            maxi=max(maxi,max(prefix[i],suffix[i]));
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna