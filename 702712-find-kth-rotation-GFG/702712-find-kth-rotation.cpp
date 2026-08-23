class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        // Code Here
        int low=0, high=nums.size()-1, idx=-1, mini=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid] && nums[mid]<=nums[high]){
                if(nums[low]<mini){
                    idx=low;
                    mini=nums[low];
                }
                break;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=mini){
                    idx=low;
                    mini=nums[low];
                }
                low=mid+1;
            }
            
            
            else if(nums[mid]<=nums[high]){
                if(nums[mid]<=mini){
                    idx=mid;
                    mini=nums[mid];
                }
                 high=mid-1;
            }
        }
        return idx;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna