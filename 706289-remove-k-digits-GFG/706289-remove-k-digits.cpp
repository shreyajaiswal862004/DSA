class Solution {
  public:
    string removeKdig(string &arr, int k) {
        // code here
        int i=0, n=arr.size();
        stack<char>st;
        while(i<n){
            while(!st.empty() && k>0 && st.top()>arr[i]){
                st.pop();
                k--;
            }
            st.push(arr[i++]);
        }
        
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans="";
       while(!st.empty()) {
                   ans.push_back(st.top());
                   st.pop();
        }

        reverse(ans.begin(), ans.end());
        
        int j=0;
        while(j<ans.size() && ans[j]=='0') j++;
        ans=ans.substr(j);
        if(ans.empty()) ans="0";
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna