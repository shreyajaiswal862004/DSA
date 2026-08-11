class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        // code here
        int cnt=0;
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                st.push(cnt);
                ans.push_back(st.top());
            }
            else if(s[i]==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna