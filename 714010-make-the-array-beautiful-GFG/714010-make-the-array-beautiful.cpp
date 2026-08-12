class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(!st.empty() && st.top()>=0 && arr[i]<0){
                st.pop();
            }
            else if(!st.empty() && st.top()<0 && arr[i]>=0){
                st.pop();
            }
            else{
                st.push(arr[i]);
            }
        }
        vector<int>ans(st.size(),0);
        for(int i=st.size()-1 ; i>=0; i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna