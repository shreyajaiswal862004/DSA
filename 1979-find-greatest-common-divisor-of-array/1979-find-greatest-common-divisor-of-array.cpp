class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini= *min_element(nums.begin(),nums.end());
        int maxi= *max_element(nums.begin(),nums.end());

        while(maxi!=0){
            int rem= mini % maxi;
            mini=maxi;
            maxi=rem;
        }
        return mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna