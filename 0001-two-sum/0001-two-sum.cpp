class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                //ans.push_back(mpp[target-nums[i]],i);
                return {mpp[target-nums[i]],i};
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna