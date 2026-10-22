class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;

        for(int i=1;i<=nums.size();i++){
            mpp[i]++;
        }

        
        for(int i=0;i<nums.size();i++){
                mpp[nums[i]]--;
        }

        for(int i=1;i<=nums.size();i++){
            if(mpp[i]==1) ans.push_back(i);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna