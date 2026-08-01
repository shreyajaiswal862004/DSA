class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans;
        for(char c:s){
            if(c=='('){
                if(!st.empty()){
                    ans+='(';
                }
                st.push('(');
            }
            else if(c==')'){
                st.pop();
                if(!st.empty()){
                    ans+=')';
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna