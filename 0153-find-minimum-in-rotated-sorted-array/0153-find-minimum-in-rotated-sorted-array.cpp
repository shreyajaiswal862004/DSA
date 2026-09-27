class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int low=0, high=nums.size()-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){
                mini=min(mini,nums[low]);
                low=mid+1;
            }
            else if(nums[mid]<=nums[high]){
                mini=min(mini,nums[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna