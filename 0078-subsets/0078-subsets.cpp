class Solution {
public:
    void sets(int idx, vector<vector<int>>&ans, vector<int>temp, int n, vector<int>&nums){
        if(idx==n){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        sets(idx+1, ans, temp, n,  nums);
        temp.pop_back();

        sets(idx+1, ans, temp, n,  nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        sets(0,ans,temp,n,nums);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna