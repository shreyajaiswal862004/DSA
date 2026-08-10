class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(char it:s){
            if(it=='(' || it=='{' || it=='['){
                st.push(it);
            }
            else{
                if(!st.empty() && ((it==')' && st.top()!='(') || (it=='}' && st.top()!='{') || (it==']' &&  st.top()!='['))){
                    return false;
                }
                else{
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return st.empty()? true:false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna