class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(auto it:s){
            if(it=='(') st.push(it);
            else if(it=='{') st.push(it);
            else if(it=='[') st.push(it);
            else if(it==')'){
                if(!st.empty() && st.top()=='(') st.pop();
                else return false;
            }
            else if(it==']'){
                if(!st.empty() && st.top()=='[') st.pop();
                else return false;
            }
            else if(it=='}'){
                if(!st.empty() && st.top()=='{') st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna