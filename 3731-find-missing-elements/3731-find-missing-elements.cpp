class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>ans;

        unordered_map<int,int>mpp;

        for(int i=mini;i<=maxi;i++){
            mpp[i]++;
        }

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]--;
        }

        for(int i=mini;i<=maxi;i++){
            if(mpp[i]==1) ans.push_back(i);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna