class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1, ans=-1, n=nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-1]) return nums[n-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(mid>0 && nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                ans=nums[mid];
                break;
            }
            else if(mid<n && nums[mid]==nums[mid+1] && mid%2!=0) high=mid-1;
            else if(mid >0 && nums[mid]==nums[mid-1] && mid%2!=1) high=mid-1;
            else low=mid+1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna