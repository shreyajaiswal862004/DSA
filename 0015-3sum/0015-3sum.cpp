class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int k=nums.size()-1;
            int j=i+1;
                while(j<k){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        ans.push_back(temp);
                        while(j<k && nums[j]==nums[j+1]) j++;
                        while(j<k && nums[k]==nums[k-1]) k--;
                        j++;
                        k--;
                    }
                    else if(sum>0)k--;
                    else j++;
                }
            }
            return ans;
        }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna