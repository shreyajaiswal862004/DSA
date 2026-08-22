class Solution {
  public:
    bool validateOp(vector<int>& a, vector<int>& b) {
        // code here
        int i=0,j=0,n=a.size();
        stack<int>st;
        while(i<n){
            st.push(a[i]);
            while(!st.empty() && st.top()==b[j]){
                st.pop();
                j++;
            }
            i++;
        }
        return st.empty()?true:false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna