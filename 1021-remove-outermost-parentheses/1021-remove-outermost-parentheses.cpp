class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        string ans;
        for(auto it:s){
            if(it=='('){
                if(!st.empty()){
                    ans+=it;
                }
                st.push('(');
            }
            else if (it==')'){
                st.pop();
                if(!st.empty()){
                    ans+=it;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna