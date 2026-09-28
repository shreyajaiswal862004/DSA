class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0, r=n-1;
        int maxi=INT_MIN;
        while(l<r){
            int water=(min(height[l],height[r])*(r-l));
            maxi=max(maxi,water);

            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna