class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            unordered_set<int>st;
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                int a=st.size();
                cnt+=a*a;
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna