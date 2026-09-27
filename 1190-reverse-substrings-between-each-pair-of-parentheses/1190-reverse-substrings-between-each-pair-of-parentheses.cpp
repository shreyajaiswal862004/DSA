class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string curr="";
        for(auto it:s){
            if(it=='('){
                st.push(curr);
                curr="";
            }
            else if(it==')'){
                reverse(curr.begin(),curr.end());
                curr=st.top()+curr;
                st.pop();
            }
            else curr+=it;
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna