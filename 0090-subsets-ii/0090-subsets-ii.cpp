class Solution {
public:
    void subset(int idx, vector<int>& nums, vector<vector<int>>&ans, vector<int>&temp , int n){
        if(idx==n){
            ans.push_back(temp);
            return;
        }

        int next=idx+1;
        while(next<n && nums[idx]==nums[next]) next++;
        
        temp.push_back(nums[idx]);
        subset(idx+1, nums, ans,temp,n);
        temp.pop_back();

        subset(next,nums,ans,temp,n);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        subset(0,nums,ans,temp,n);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna