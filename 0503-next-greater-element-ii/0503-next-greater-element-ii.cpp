class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(nums.size()*2,0);
        for(int i=nums.size()*2-1 ; i>=0;i--){
            int a= (i)%n;
            while(!st.empty() && st.top()<=nums[a]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            if(!st.empty() && st.top()>nums[a]){
                ans[i]=st.top();
            }
            st.push(nums[a]);
        }

        return vector<int>(ans.begin(), ans.begin()+n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna