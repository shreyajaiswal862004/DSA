class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(auto it:arr){
            if(it>=0){
                if(!st.empty() && st.top()<0) st.pop();
                else st.push(it);
            }
            else if(it<0){
                if(!st.empty() && st.top()>=0) st.pop();
                else st.push(it);
            }
        }
        
        int n=st.size();
        vector<int>ans(n,0);
        
        while(!st.empty()){
            ans[n-1]=st.top();
            n--;
            st.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna