class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0, n=height.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);

        prefix[0]=height[0];
        suffix[n-1]=height[n-1];

        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }

        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],height[i]);
        }

        for(int i=0;i<n;i++){
            if(height[i]<=prefix[i] && height[i]<=suffix[i]){
                ans+=(min(prefix[i],suffix[i])-height[i]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna