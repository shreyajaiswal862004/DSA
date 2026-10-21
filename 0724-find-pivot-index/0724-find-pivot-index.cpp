class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        if(n==1) return 0;

        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }

        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }

        if(n>1 && suffix[1]==0) return 0;
        for(int i=1;i<n-1;i++){
            if(prefix[i-1]==suffix[i+1]){
                return i;
            }
        }
        if(n>1 && prefix[n-2]==0) return n-1;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna