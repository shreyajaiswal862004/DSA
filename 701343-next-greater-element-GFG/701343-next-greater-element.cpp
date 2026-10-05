class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]) st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna