class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
       int j=1, n=nums.size();
       while(j<n){
        if(nums[i]!=nums[j]){
            swap(nums[i+1],nums[j]);
            i++;
        }
        j++;
       } 
       return i+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna