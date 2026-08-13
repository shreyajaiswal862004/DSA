class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto it:s){

            if(it=='{' || it=='(' || it=='[') st.push(it);

            else{
                if(st.empty()) return false;

                if(!st.empty() && (it==')' && st.top()!='(') || (it=='}' && st.top()!='{') || (it==']' && st.top()!='[')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna