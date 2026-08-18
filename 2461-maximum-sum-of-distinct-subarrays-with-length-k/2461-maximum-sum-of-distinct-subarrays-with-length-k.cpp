class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0;
        long long ans=0;
        
        unordered_map<int,int> freq;
        //vector<int>freq(nums.size(),0);
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            freq[nums[j]]++;

            if(j>=k){
                int left=j-k;
                sum-=nums[left];
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) freq.erase(nums[left]);
            }

            if(j>=k-1){
                if((int)freq.size()==k){
                    ans=max(ans,sum);
                }
                
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna