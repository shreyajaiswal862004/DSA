class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                int n=st.size();
                maxi=max(maxi,n);
            }
            else if(s[i]==')'){
                st.pop();
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna