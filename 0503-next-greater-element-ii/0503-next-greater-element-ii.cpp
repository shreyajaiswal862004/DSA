class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n*2-1,0);
        stack<int>st;
        for(int i=nums.size()*2-1;i>=0;i--){
            int a=i%nums.size();
            while(!st.empty() && nums[a]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                 ans[a]=-1;
            }
            else ans[a]=st.top();

            st.push(nums[a]);
        }

        return vector<int>(ans.begin(), ans.begin()+n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna